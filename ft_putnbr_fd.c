/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:57:18 by polpi             #+#    #+#             */
/*   Updated: 2022/11/03 07:19:46 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * -1, fd);
	}
	else if (n < 10)
		ft_putchar_fd((char)(n + '0'), fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
*/

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;

	nbr = "0123456789";
	if (n == -2147483648)
	{
		write (fd, "-2", 2);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		n = n * -1;
		write (fd, "-", 1);
	}
	if (n < 10)
	{
		write (fd, &nbr[n], 1);
	}
	else 
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
}
/*
int main(void)
{
	ft_putnbr_fd(-2147483648, 1);
}
*/