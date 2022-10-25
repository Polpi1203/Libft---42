/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:47:37 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/24 10:47:39 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_1(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t length)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;

	i = 0;
	j = 0;
	len_dest = ft_strlen_1(dest);
	while (dest[i] != '\0' && i < length)
		i++
	dest[i] = '\0';
	return (ft_strlen_1(dest));
}

int main(int argc, char **argv)
{
	(void)argc;

	printf("%zu\n", ft_strlcat(argv[1], argv[2], atoi(argv[3])));
	printf("%lu\n", strlcat(argv[1], argv[2], atoi(argv[3])));
}
