/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:57:18 by polpi             #+#    #+#             */
/*   Updated: 2022/11/02 21:33:39 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;

	nbr = "0123456789";
	
	if (n < 0)
	{
		n = n * -1;
		write (fd, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);	
	}
	else if (n < 9)
	{
		write (fd, &nbr[n], 1);
	}
}

int main(void)
{
	ft_putnbr_fd(-214748368, 1);
}
