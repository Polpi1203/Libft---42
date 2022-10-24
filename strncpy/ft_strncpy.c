/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:48:31 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/24 10:48:33 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cette fonction permet de copier le contenu d'une chaîne de caractère dans une autre, dans la limite de length caractères.

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	printf("%d\n", i);
	return (i);
}

char	*ft_strcpy(char *str, char *copy, int length)
{
	int	i;
	int	size_srce;

	i = 0;
	size_srce = ft_strlen(str);
	while (str[i] != '\0' && i < length)
	{
		copy[i] = str[i];
		i++;
	}
	if (size_srce <= length)
	{
		copy[i] = str[i];
	}
	return (copy);
}
/*
int main(void)
{
	char str[50] = "Je vais à la boulangerie chercher du pain !!! ";
	char copy[50] = "";
	int length = 40;

	printf("%s\n", ft_strcpy(str, copy, length));
}*/