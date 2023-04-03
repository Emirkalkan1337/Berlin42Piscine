/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:09:01 by emkalkan          #+#    #+#             */
/*   Updated: 2023/03/22 15:00:01 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (dest[i] != src[i])
	{
		dest[i] = '\0';
	}
	return (dest);
}
/*
#include <stdio.h>
char *ft_strcpy(char *dest, char *src);

int main(void)
{
    char src[] = "Hello, world!";
    char dest[20];
    
    ft_strcpy(dest, src);
    printf("Source string: %s\n", src);
    printf("Copied string: %s\n", dest);
    
    return 0;
}
*/
