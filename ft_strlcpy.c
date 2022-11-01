/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 07:04:15 by polpi             #+#    #+#             */
/*   Updated: 2022/11/01 07:28:20 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main(void)
{
	char    *dest;
	char    *src;
	size_t  dstsize;

	src = "ABCDEFGH";
	dest = NULL;
	dstsize = 3;

	printf("%d\n", ft_strlcpy(dest, src, dstsize));
	printf("%d\n", strlcpy(dest, src, dstsize));
}
*/