/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:48:31 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/30 14:24:22 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t length)
{
	int		i;
	size_t	size_srce;

	i = 0;
	size_srce = ft_strlen(src);
	while (src[i] != '\0' && i < length)
	{
		dst[i] = src[i];
		i++;
	}
	if (size_srce <= length)
	{
		dst[i] = src[i];
	}
	return (dst);
}
/*
int main(void)
{
	char str[50] = "Je vais à la boulangerie chercher du pain !!! ";
	char copy[50] = "";
	int length = 40;

	printf("%s\n", ft_strncpy(str, copy, length));
}*/