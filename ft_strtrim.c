/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:56:31 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/26 10:31:56 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char c, char const *set)
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
		if (check(s1[i], set) == 0)
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
		if (check(s1[i], set) == 0)
		{
			result[j] = s1[i];
			j++;
		}	
		i++;
	}
	result[j] = '\0';
	return (result);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
}
*/