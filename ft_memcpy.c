/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:56:11 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/01 13:45:56 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void	*src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)dst + i) = *((char *) src + i);
		i++;
	}
	return (dst);
}
/*
int main(void)
{
	char    dst[50] = {0};
	char    src[50] = {0};

	printf("%s\n", ft_memcpy(dst, src, 7));
	printf("%s\n", memcpy(dst, src, 7));
}
*/