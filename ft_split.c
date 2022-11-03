/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:32:58 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/03 20:35:26 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"
// REGARDER !! PAS TOUT COMPRIS !!! 
static char	*ft_strndup(const char *s, int n)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * (n + 1));
	if (res == NULL)
		return (NULL);
	while (i < n)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static int	word_number(const char *str, char sep)
{
	int	count;
	int	i;

	count = 0;
	i = -1;
	while (str[++i])
		if ((str[i] != sep) && (i == 0 || sep == str[i - 1]))
			count++;
	return (count);
}

static int	word_len(const char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] && sep != str[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**res;

	j = -1;
	i = -1;
	res = malloc(sizeof(res) * (word_number(s, c) + 1));
	if (res == NULL)
		return (NULL);
	while (s[++i])
	{
		if ((c != s[i]) && (i == 0 || c == s[i - 1]))
		{
			res[++j] = ft_strndup(s + i, word_len(s + i, c));
			if (res[j] == NULL)
			{
				while (--j >= 0)
					free(res[j]);
				free(res);
				return (NULL);
			}
		}
	}
	res[++j] = NULL;
	return (res);
}
/*
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
	result = (char **)malloc(sizeof(char *) * (size_array(s, c) + 1));
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