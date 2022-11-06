/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:46:32 by afaucher          #+#    #+#             */
/*   Updated: 2022/11/05 17:16:28 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nb(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		i++;
	while (nb != '\0')
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	nb;

	i = ft_nb(n);
	nb = n;
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	str[i] = '\0';
	i--;
	while (nb != '\0')
	{
		str[i] = nb % 10 + '0';
		i--;
		nb = nb / 10;
	}
	return (str);
}
