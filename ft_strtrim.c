/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:56:31 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/03 18:16:29 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_start_index(const char *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	return (i);
}

static int	get_end_index(const char *s1, char const *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len && ft_strchr(set, s1[len - i - 1]) != NULL)
		i++;
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = get_start_index(s1, set);
	end = get_end_index(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	str = malloc(sizeof(*str) * (end - start + 1));
	if (str != NULL)
		ft_strlcpy(str, s1 + start, (end - start + 1));
	return (str);
}
/*
int	check_rim(char c, char const *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

int	size_result(char const *s1, char const *set)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (s1[i] != '\0')
	{
		if (check_rim(s1[i], set) == 0)
			size++;
		i++;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	result = (char *)malloc(sizeof(char) * size_result(s1, set));
	if (result == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (check_rim(s1[i], set) == 0)
		{
			result[j] = s1[i];
			j++;
		}	
		i++;
	}
	result[j] = '\0';
	return (result);
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
}
*/