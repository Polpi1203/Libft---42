/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:47:37 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/24 10:47:39 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cette fonction permet d'ajouter les «n» premiers caractères de la chaine de caractères «str1» à la chaine de caractères «str2».
// Et de renvoyer le nombre final de caractère contenu dans dest !

#include <stdio.h>
#include <stdlib.h>

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

int	ft_strlcat(char *dest, char *src, int length)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && j < length)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest));
}
/*
int main(int argc, char **argv)
{
	(void)argc;

	printf("%d\n", ft_strlcat(argv[1], argv[2], atoi(argv[3])));
}
*/