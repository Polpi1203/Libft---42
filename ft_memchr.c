/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:55:06 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/03 20:17:05 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*
int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	printf("%s\n", ft_memchr("/|\x12\xff\x09\x42\042\42|\\", '/x42', 2));
	printf("%s\n", memchr("/|\x12\xff\x09\x42\042\42|\\", '\x42', 2));
	
}
*/