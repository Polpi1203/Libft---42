/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:23:47 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/03 20:29:31 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	while (*s != '\0')
	{	
		if (*s == (char)c)
			result = (char *)(s);
		s++;
	}
	if ((char)c == '\0')
		result = (char *)(s);
	return (result);
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