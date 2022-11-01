/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:42:34 by polpi             #+#    #+#             */
/*   Updated: 2022/11/01 10:34:56 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (d < s)
	{
		while (len != 0)
		{
			d[len] = s[len];
			len--;
		}
	}
	else
	{
		while (i != len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
