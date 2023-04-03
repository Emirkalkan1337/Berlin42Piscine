/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:00:05 by emkalkan          #+#    #+#             */
/*   Updated: 2023/03/23 16:18:38 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && n != 0)
	{
		dest[i] = src[i];
		i++;
		if (i == n)
			break ;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char src[] = "Hello, world!";
    char dest[20];
    
    ft_strncpy(dest, src, 7);
    printf("Source string: %s\n", src);
    printf("Copied string: %s\n", dest);
    
    return 0;
}
*/
