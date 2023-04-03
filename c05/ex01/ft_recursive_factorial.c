/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:18:08 by emkalkan          #+#    #+#             */
/*   Updated: 2023/04/01 17:54:21 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (result);
}
/*
#include <stdio.h>

int ft_recursive_factorial(int nb);

int main()
{
    int n = 5;
    int result = ft_recursive_factorial(n);
    printf("The factorial of %d is %d.\n", n, result);
    return 0;
}
*/
