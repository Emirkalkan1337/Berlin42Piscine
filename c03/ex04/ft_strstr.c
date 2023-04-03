/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 20:50:47 by emkalkan          #+#    #+#             */
/*   Updated: 2023/03/25 21:03:17 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char str[] = "Hallo";
	char to_find[] = "llo";

	printf("Test: %s|\n", ft_strstr(str, to_find));
	printf("Real: %s|", strstr(str, to_find));
}*/
