/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:16:06 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/24 14:16:08 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	lower;

	lower = 0;
	if (!(c >= 65 && c <= 90))
		return (c);
	else
		lower = c + 32;
	return (lower);
}
/*

int main(void)
{
	printf("%d\n", ft_tolower('C'));
}
*/