/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:16:51 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/30 15:39:27 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
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