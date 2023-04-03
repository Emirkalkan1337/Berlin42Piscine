/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:15:48 by emkalkan          #+#    #+#             */
/*   Updated: 2023/03/19 13:37:50 by ole              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_middle(int x)
{
	int	width;

	width = 1;
	while (width <= x)
	{
		if (width == 1 || width == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		width++;
	}
}

void	ft_print_top_bottom(int x)
{
	int	width;

	width = 1;
	while (width <= x)
	{
		if (width == 1 || width == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		width++;
	}
}

void	rush(int x, int y)
{
	int	length;

	if (x <= 0 || y <= 0)
	{
		write(1, "Error invalid input\n", 20);
		return ;
	}
	length = 1;
	while (length <= y)
	{
		if (length == 1 || length == y)
			ft_print_top_bottom(x);
		else
			ft_print_middle(x);
		ft_putchar('\n');
		length++;
	}
}
