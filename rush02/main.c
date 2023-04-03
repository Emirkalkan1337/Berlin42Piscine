/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:41:40 by emkalkan          #+#    #+#             */
/*   Updated: 2023/04/02 16:47:17 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	unsigned long	nbr;

	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		{
			if (nbr > 4294967295 || nbr == 0)
				write(1, "Error: argument out of range\n", 30);
		}
		what_digit(nbr);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
