/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:12:29 by emkalkan          #+#    #+#             */
/*   Updated: 2023/04/02 16:44:40 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*one[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char	*ten[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
char	*teen[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		++len;
		++str;
	}
	return (len);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		++str;
	}
}

void	print_nbr(int i)
{
	write(1, one[i], ft_strlen(one[i]));
}

void	print_tens(int nbr)
{
	if (nbr >= 10 && nbr <= 19)
		ft_putstr(teen[nbr - 10]);
	else
		ft_putstr(ten[nbr / 10]);
	if (nbr % 10 != 0)
	{
		ft_putstr(" ");
		print_nbr(nbr % 10);
	}	
}

int	ft_atoi(char *str)
{
	int				i;
	unsigned long	nb;

	i = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		return (0);
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
}
