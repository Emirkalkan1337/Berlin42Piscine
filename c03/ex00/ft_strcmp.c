/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:27:16 by emkalkan          #+#    #+#             */
/*   Updated: 2023/03/25 20:41:35 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		++i;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int main(void)
{
	char *s1 = "hello";
	char *s2 = "world";

	printf("%s comes before %s\n", s1, s2);

	return 0;
}
*/
