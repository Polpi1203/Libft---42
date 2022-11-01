/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:47:37 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/01 10:53:04 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t length)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;

	i = 0;
	j = 0;
	len_dest = ft_strlen(dest);
	while (src[j] != '\0' && len_dest <= length - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (length != 0 && length >= len_dest)
		dest[i] = '\0';
	if (length < ft_strlen(dest))
		return (ft_strlen(src) + length);
	else
		return (ft_strlen(src) + len_dest);
}
