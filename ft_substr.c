/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:44:03 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/03 18:50:21 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	str = malloc(sizeof(*str) * (len + 1));
	if (str != NULL)
	{
		ft_memcpy(str, s + start, len);
		str[len] = '\0';
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%s\n", ft_substr("abcdefghijklmnopppppppp", 7, 10));
}
*/