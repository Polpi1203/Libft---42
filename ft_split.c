/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:32:58 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/26 13:39:45 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char p, char c)
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
		if (check(s[i], c) == 1)
			size++;
		i++;
	}
	return (size);
}

int	count_word(const char *str, char c)
{
	int	i;

	i = 0;
	while (check(str[i], c) == 0)
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
		while (*s != '\0' && check(*s, c) == 1)
			s++;
		if (*s != '\0' && check(*s, c) == 0)
		{
			result[i] = ft_copy(s, c);
			i++;
		}
		while (*s != '\0' && check(*s, c) == 0)
			s++;
	}
	result[i] = 0;
	return (result);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	int i;
    char **copie;

    copie = ft_split(argv[1], 'a');
    i = 0;
    while (copie[i] != 0)
    {
        printf("%s\n", copie[i]);
        i++;
    }
}
*/