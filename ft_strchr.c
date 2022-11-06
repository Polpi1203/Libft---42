/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:46:27 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/06 10:51:32 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}

/*
int main(void)
{
	const char    str[50] = "the cake is a lie !\0I'm hidden lol\r\n";

	printf("%s\n", ft_strchr(str, 'x'));
	printf("%s\n", strchr(str, 'x'));
}
*/