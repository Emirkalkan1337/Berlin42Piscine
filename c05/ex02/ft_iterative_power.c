/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 01:53:40 by emkalkan          #+#    #+#             */
/*   Updated: 2023/04/01 23:29:29 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	return (result);
}
/*
#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main()
{
    int n = 2; // base
    int p = 5; // power
    int result = ft_iterative_power(n, p);
    printf("%d raised to the power of %d is %d\n", n, p, result);
    return 0;
}
*/
