/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:50:36 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/24 13:50:43 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// renvoi True si il y'a uniquement des caractere alphabetique dans la chaine de caractere

int ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	else
		return (1);
}

#include <stdio.h>
int main(void)
{
	int a;

	a = ft_isascii(5);
}
