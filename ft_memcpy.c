/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:56:11 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/03 14:53:36 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int main(void)
{
	//char    dst[50] = {0};
	//char    src[50] = {0};

	printf("%s\n", ft_memcpy(((void *)0), ((void *)0), 3));
	printf("%s\n", memcpy(((void *)0), ((void *)0), 3));
}
*/