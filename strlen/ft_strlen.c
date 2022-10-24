/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:47:54 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/24 10:47:56 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Retourner le nombre de caractère d'une chaine donnée !

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_strlen(argv[1]));
}
*/