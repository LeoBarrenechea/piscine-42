/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <jperez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:03:17 by isojo-go          #+#    #+#             */
/*   Updated: 2022/07/17 20:13:33 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
}

void	ft_swap_str(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) && *(s2 + i) && *(s1 + i) == *(s2 + i))
		i++;
	return (*(s1 + i) - *(s2 + i));
}

int	ft_strcmp2(char *s1, char *s2)
{
	int	i;
	int	last1;
	int	last2;

	last1 = ft_strlen(s1);
	last2 = ft_strlen(s2);
	i = 0;
	if (last1 < last2)
		return (0);
	if (last1 == last2)
	{
		while (*(s1 + i) && *(s2 + i) && *(s1 + i) == *(s2 + i))
			i++;
		return (*(s1 + i) - *(s2 + i));
	}
	else
		return (1);
}
