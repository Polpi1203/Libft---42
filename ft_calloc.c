/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 07:37:17 by polpi             #+#    #+#             */
/*   Updated: 2022/11/01 14:46:19 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;

	result = (char *)malloc(count * size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, size);
	//free(result);
	return (result);
}
/*
int main(void)
{f
	char *a;

	a = ft_calloc(5, 2);

	printf("%lu\n", sizeof(a));

	a = calloc(8, 4);

	printf("%lu\n", sizeof(a));
}
*/