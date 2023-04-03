/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 20:48:48 by emkalkan          #+#    #+#             */
/*   Updated: 2023/03/25 21:05:47 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && (j < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[50] = "Hello, ";
	char *src = "world!";
	unsigned int nb = 3;

	ft_strncat(dest, src, nb);
	printf("The result of concatenating '%s' and '%.*s
'with a maximum of %u characters is: %s\n", "Hello, ", nb, "world!", nb, dest);
    
    return 0;
}
*/
