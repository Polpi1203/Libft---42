/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 07:37:17 by polpi             #+#    #+#             */
/*   Updated: 2022/10/29 08:22:01 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	j = count * size;
	result = (char *)malloc(sizeof(char) * j);
	if (result == NULL)
		return (NULL);
	while (i <= j)
	{
		result[i] = '\0';
		i++;
	}
	free(result);
	return (result);
}
/*
int main(void)
{
	char *a;

	a = ft_calloc(5, 2);

	printf("%lu\n", sizeof(a));

	a = calloc(8, 4);

	printf("%lu\n", sizeof(a));
}
*/