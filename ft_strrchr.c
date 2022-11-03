/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:23:47 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/03 10:44:10 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{	
		if(s[len] == (char)c)
			return (((char *)s) + len);
		len --;
	}
	return (NULL);
}
/*
int main(void)
{
	const char	*s;

	s = "bonjour";

	printf("%s\n", ft_strrchr(s, 'o'));
	printf("%s\n", strrchr(s, 'o'));
	
}
*/