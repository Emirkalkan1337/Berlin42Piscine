/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:46:12 by emkalkan          #+#    #+#             */
/*   Updated: 2023/04/01 17:47:51 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/*
#include <stdio.h>

int ft_fibonacci(int index);

int main()
{
    int n = 10; // test input
    int result = ft_fibonacci(n);
    if (result == -1)
    {
        printf("Invalid input: index must be non-negative.\n");
    }
    else
    {
        printf("The %dth Fibonacci number is %d.\n", n, result);
    }
    return 0;
}
*/
