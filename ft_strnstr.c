/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:41:16 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/01 14:25:55 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (needle[j] != haystack[i])
			i++;
		else if (needle[j] == haystack[i])
		{
			while (needle[j] == haystack[i] && needle[j] != '\0')
				j++;
				i++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + (i - j));
	}
	return (0);
}
/*
int main(void)
{
	printf("%s\n", ft_strnstr("Je vais a la boulangerie", "war", 15));
	printf("%s\n", strnstr("Je vais a la boulangerie", "war", 15));
}
*/