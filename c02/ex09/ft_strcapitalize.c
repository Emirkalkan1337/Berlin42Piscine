/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:32:08 by emkalkan          #+#    #+#             */
/*   Updated: 2023/03/23 20:53:38 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_lowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && i == 0)
		{
			str[i] -= 32;
			i++;
		}
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a'
				&& str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		else
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
	}
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
        char    str[] = "salut, comment tu vas ? 
	42mots quarante-deux cinquante+et+un";
        printf("%s", ft_strcapitalize(str));
        return (0);
}
*/
