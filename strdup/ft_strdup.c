/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:47:23 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/24 10:47:25 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La fonction strdup() renvoie un pointeur sur une nouvelle chaîne de caractères qui est dupliquée depuis s.
// La mémoire occupée par cette nouvelle chaîne est obtenue en appelant malloc(3), et peut (doit) donc être libérée avec free(3)

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

char	*ft_strdup(char *str)
{
	int		size;
	char	*copie;
	int		i;

	size = ft_strlen(str);
	i = 0;
	copie = (char *)malloc(sizeof(char) * (size + 1));
	while (str[i] != '\0')
	{
		copie[i] = str[i];
		i++;
	}
	copie[i] = '\0';
	return (copie);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
}
*/