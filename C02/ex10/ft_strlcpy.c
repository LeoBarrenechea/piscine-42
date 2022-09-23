/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarrene <lbarrene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:33:23 by lbarrene          #+#    #+#             */
/*   Updated: 2022/07/17 10:23:38 by lbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *str, unsigned int size)
{
	unsigned int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (n < size)
			dest[n] = str[n];
		n++;
	}
	dest[n] = '\0';
	if (str[n] > dest[n])
		str[n] = '\0';
	return (n);
}
/*int main (void)
{
	char c[20] = "hola";
	char d[20] = "hello";
	char e[20] = "hola";
	char f[20] = "hello";

	printf("%s, %d\n", c, ft_strlcpy(c, d, 2));
	printf("%s, %lu\n", f, strlcpy(f, e, 2));
	return (0);
}*/
