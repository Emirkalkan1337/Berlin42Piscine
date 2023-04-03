/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 01:05:02 by emkalkan          #+#    #+#             */
/*   Updated: 2023/03/28 01:10:36 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	white(int *i, int *sign, char *str)
{
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == ' ')
		(*i)++;
	while (str[*i] == '-' || str [*i] == '+')
	{
		if (str[*i] == '-')
			*sign *= -1;
		(*i)++;
	}
}

int	ft_atoi(char *str)
{
	int	convert;
	int	n;
	int	i;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	white(&i, &sign, str);
	while (str[i] >= '0' && str [i] <= '9')
	{
		convert = str[i] - '0';
		n = (n * 10) + convert;
		i++;
	}
	return (n * sign);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("  ---+--+1234ab567"));
	printf("%d\n", ft_atoi("  ----+--+1234ab567"));
	printf("%d\n", ft_atoi("  +1234ab567"));
	printf("%d\n", ft_atoi("  +184467ab567"));
	printf("%d\n", ft_atoi("a"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi("0"));
}
*/
