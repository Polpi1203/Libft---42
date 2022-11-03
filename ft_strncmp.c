/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:28:48 by polpi             #+#    #+#             */
/*   Updated: 2022/11/03 20:18:41 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n
		&& (((unsigned char *)s1)[i] != '\0'
		|| ((unsigned char *)s2)[i] != '\0'))
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}	
/*
int main(void)
{
	char	*s1;
	char	*s2;

	s1 = "atoms\0\0\0\0";
	s2 = "atoms\0abc";

	printf("%d\n", ft_strncmp(s1, s2, 8));
	printf("%d\n", strncmp(s1, s2, 8));

}
*/