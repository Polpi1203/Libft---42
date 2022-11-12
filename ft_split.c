/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:32:58 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/12 10:22:24 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
