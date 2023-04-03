/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:12:33 by emkalkan          #+#    #+#             */
/*   Updated: 2023/03/19 15:09:10 by feberman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_error_arg_count(void)
{
	write(1, "Error: Wrong number of arguments.\n", 35);
}

void	ft_error_not_num(void)
{
	write(1, "Error: Input not numerical or has decimals.\n", 44);
	write(1, "Only positive integers allowed.\n", 32);
}

void	ft_error_overflow(void)
{
	write(1, "Error: Input number to high.\n", 29);
}
