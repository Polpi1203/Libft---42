/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:47:23 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/30 14:49:11 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	size;
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

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
}
*/