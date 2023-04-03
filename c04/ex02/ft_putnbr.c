/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:14:07 by emkalkan          #+#    #+#             */
/*   Updated: 2023/03/29 19:19:48 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}
/*
#include <limits.h>

int	main(void)
{
	int	num1;
	int	num2;

	num1 = -0;
	num2 = -2147483648;
	ft_putnbr(num1);
	ft_putchar('\n');
	ft_putnbr(num2);
	ft_putchar('\n');
	ft_putnbr(INT_MAX);
	ft_putchar('\n');
	//ft_putnbr(INT_MIN);
	ft_putchar('\n');
	return 0;
}
*/
