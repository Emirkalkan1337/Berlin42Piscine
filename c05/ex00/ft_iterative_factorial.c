/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:03:10 by emkalkan          #+#    #+#             */
/*   Updated: 2023/04/01 22:34:33 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
/*
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main()
{
    int n = -3; // test input
    int result = ft_iterative_factorial(n);
    printf("The factorial of %d is %d.\n", n, result);
    return 0;
}
*/
