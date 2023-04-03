/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   what_digit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:13:08 by emkalkan          #+#    #+#             */
/*   Updated: 2023/04/02 16:22:02 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	what_digitot(int nbr)
{
	if (nbr >= 1000000000)
	{
		what_digit(nbr / 1000000000);
		ft_putstr(" billion ");
	}
	if (nbr % 1000000000 != 0)
		what_digit(nbr % 1000000000);
	else if (nbr >= 1000000)
	{
		what_digit(nbr / 1000000);
		ft_putstr(" million ");
	}
	if (nbr % 1000000 != 0)
		what_digit(nbr % 1000000);
}

void	what_digitut(int nbr)
{
	else if (nbr >= 1000)
	{
		what_digit(nbr / 1000);
		ft_putstr(" thousand ");
	}
	if (nbr % 1000 != 0)
		what_digit(nbr % 1000);
	else if (nbr >= 100)
	{
		print_nbr(nbr / 100);
		ft_putstr(" hundred ");
	}
	if (nbr % 100 != 0)
		print_tens(nbr % 100);
	else
		print_tens(nbr);
}
