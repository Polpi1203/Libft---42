/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:46:32 by afaucher          #+#    #+#             */
/*   Updated: 2022/10/26 16:34:03 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	size_int(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	printf("%d\n", len);
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		size;
	int		inter;

	inter = 0;
	size = size_int(n);
	i = 0;
	result = (char *)malloc(sizeof(char) * size);

	while (i < size)
	{
		inter = n % 10;
		n = n / 10;
		result[i] = inter + 48;
		i++;
	}
	return(result);
}
int main(void)
{
	printf("%s\n", ft_itoa(123456));
}