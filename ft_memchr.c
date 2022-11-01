/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:55:06 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/01 17:07:54 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*result;
	unsigned char	p;

	result = (unsigned char *)s;
	p = (unsigned char)c;		
	i = 0;
	while (i < n)
	{
		if (*result == p)
			return (result);
		result++;
	}
	return (NULL);
}

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	printf("%s\n", ft_memchr("bonjour", 'n', 2));
	printf("%s\n", memchr("bonjour", 'n', 2));
	
}
