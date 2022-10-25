/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:16:06 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/24 14:16:08 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	upper;

	upper = 0;
	if (!(c >= 97 && c <= 122))
		return (c);
	else
		upper = c - 32;
	return (upper);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_toupper('a'));
}
*/