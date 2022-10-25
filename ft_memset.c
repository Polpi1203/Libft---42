/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:16:51 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/25 09:16:55 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i <= size)
	{
		*((unsigned char *)str + i) = c;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str[50] = "Je vais acheter du pain";

	printf("%s\n", ft_memset(str, '*', 5));

	//printf("%s\n", memset(str, '*', 5));
}*/