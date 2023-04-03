/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:50:21 by ole               #+#    #+#             */
/*   Updated: 2023/03/19 15:24:51 by ole              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_top(int x)
{
	int	width;

	width = 1;
	while (width <= x)
	{
		if (width == 1)
			ft_putchar('A');
		else if (width == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		width++;
	}	
}

void	ft_print_bottom(int x)
{
	int	width;

	width = 1;
	while (width <= x)
	{
		if (width == 1)
			ft_putchar('A');
		else if (width == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		width++;
	}
}

void	ft_print_middle(int x)
{
	int	width;

	width = 1;
	while (width <= x)
	{
		if (width == 1 || width == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		width++;
	}
}

void	rush(int x, int y)
{
	int	length;

	if (x <= 0 || y <= 0)
	{
		write (1, "Error invalid input\n", 20);
		return ;
	}
	length = 1;
	while (length <= y)
	{
		if (length == 1)
			ft_print_top(x);
		else if (length == y)
			ft_print_bottom(x);
		else
			ft_print_middle(x);
		ft_putchar('\n');
		length++;
	}
}
