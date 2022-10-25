/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:43:53 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/25 13:43:57 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
    ft_memset(str, '\0', n);
}

int main(void)
{
    char    str[50] = "Je vais chercher du pain a la boulangerie";

    ft_bzero(str, 5);
}   