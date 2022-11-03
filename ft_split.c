/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:32:58 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/03 16:42:44 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_split(char p, char c)
{
	if (p == c)
		return (1);
	return (0);
}

int	size_array(char const *s, char c)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (check_split(s[i], c) == 1)
			size++;
		i++;
	}
	return (size);
}

int	count_word(const char *str, char c)
{
	int	i;

	i = 0;
	while (check_split(str[i], c) == 0)
		i++;
	return (i);
}

char	*ft_copy(const char *s, char c)
{
	int		i;
	int		size;
	char	*result;

	i = 0;
	size = count_word(s, c);
	result = (char *)malloc(sizeof(char) * size + 1);
	if (result == NULL)
		return (NULL);
	while (i < size)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	i = 0;
	result = (char **)malloc(sizeof(char *) * size_array(s, c) + 1);
	if (result == NULL)
		return (NULL);
	while (*s != '\0')
	{	
		while (*s != '\0' && check_split(*s, c) == 1)
			s++;
		if (*s != '\0' && check_split(*s, c) == 0)
		{
			result[i] = ft_copy(s, c);
			i++;
		}
		while (*s != '\0' && check_split(*s, c) == 0)
			s++;
	}
	result[i] = 0;
	return (result);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int i;
    char **copie;

    copie = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
    i = 0;
    while (copie[i] != 0)
    {
        printf("%s\n", copie[i]);
        i++;
    }
}
*/