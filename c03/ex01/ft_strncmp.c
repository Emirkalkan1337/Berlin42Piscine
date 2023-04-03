/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:02:01 by emkalkan          #+#    #+#             */
/*   Updated: 2023/03/26 17:48:01 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && i < n) || (s2[i] != '\0' && i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char *s1 = "hello world";
    char *s2 = "wello there";
    int result = ft_strncmp(s1, s2, 5);
    
    printf("The result of comparing '%s' and '%s' 
up to 5 characters is: %d\n", s1, s2, result);
    
    return 0;
}
*/
