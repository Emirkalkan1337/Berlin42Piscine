/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 19:18:46 by emkalkan          #+#    #+#             */
/*   Updated: 2023/03/19 19:45:17 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	aa;
	int	ab;
	int	ba;
	int	bb;

	aa = '0';
	while (aa <= '9')
	{
		ab = '0';
		while (ab <= '8')
		{
			ba = '0';
			while (ba <= '9')
			{
				{ 
				bb = '1';
				while (bb <= '9')
					write(1, &aa, 1);
					bb++;
					write(1, &ab, 1);
					ba++;
					write(1, " ", 2);
					write(1, &ba, 1);
					ab++;
					write(1, &bb, 1);
					aa++;
					write(1, ", ",2);
					if (aa == '9' || ab == '8' || ba == '9' || bb == '9')
						return ;
				}
			}
		}
	}
}

int main()
{
	ft_print_comb2();
	return(0);
}

