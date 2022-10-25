/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:56:11 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/25 13:56:14 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void	*src, size_t n)
{
	size_t	i;
	size_t	j;

	j = ft_strlen ((const char *)dst);
	i = 0;
	while (i < n)
	{
		*((char *)dst + j) = *((char *) src + i);
		j++;
		i++;
	}
	return (dst);
}
/*
int main(void)
{
	char    dst[50] = {0};
	char    src[50] = "56156fqefqefqfqefqefqefqe";

	printf("%s\n", ft_memcpy(dst, src, 7));
	printf("%s\n", memcpy(dst, src, 7));
}
*/