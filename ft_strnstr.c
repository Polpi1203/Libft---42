/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:41:16 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/03 15:45:04 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_needle;

	i = 0;
	j = 0;
	len_needle = ft_strlen(needle);
	if (haystack == needle)
		return (NULL);
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i <= len)
	{
		if (needle[j] != haystack[i])
			i++;
		else if (needle[j] == haystack[i])
		{
			while (needle[j++] == haystack[i++])
			{
				if (j == len_needle && i < len)
					return ((char *)haystack + (i - j));
			}
		}	
	}
	return (0);
}

int main(void)
{
	char	*s1 = "123456789";
 	char	*s2 = "";
 	//size_t	max = strlen(s1);

	printf("%s\n", ft_strnstr(s1, s2, 8));
	printf("%s\n", strnstr(s1, s2, 8));
}
