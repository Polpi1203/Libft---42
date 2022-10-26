/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:44:03 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/26 09:54:24 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*result;
	size_t		i;

	result = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (i < len)
		result[i++] = s[start++];
	result[i] = '\0';
	return (result);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_substr(argv[1], 3, 8));
}
*/