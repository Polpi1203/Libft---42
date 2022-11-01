/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:46:27 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/01 14:37:59 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c == '0')
		return (0);
	while (*str != '\0')
	{
		if (c == *str)
			return ((char *)str);
		else
			str++;
	}
	if (*str == '\0')
		return ((char *)str);
	return (0);
}
/*
int main(void)
{
	const char    str[50] = "Je vais a la boulangerie";

	printf("%s\n", ft_strchr(str, 'a'));
	printf("%s\n", strchr(str, 'a'));
}
*/