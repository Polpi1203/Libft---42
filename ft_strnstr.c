/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:41:16 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/01 15:12:25 by polpi            ###   ########.fr       */
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
	while (haystack[i] != '\0' && i <= len)
	{
		if (needle[j] != haystack[i])
			i++;
		else if (needle[j] == haystack[i])
		{
			while (needle[j] == haystack[i] && needle[j] != '\0')
			{
				i++;
				j++;
			}
		}
		if (needle[j] == '\0')
			return ((char *)haystack + (i - j));
	}
	return (0);
}
/*
int main(void)
{
	char	*s1 = "AAAAAAAA";
 	//char	*s2 = "FF";
 	size_t	max = strlen(s1);

	printf("%s\n", ft_strnstr(s1, s1, max));
	printf("%s\n", strnstr(s1, s1, max));
}
*/