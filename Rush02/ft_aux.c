/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <jperez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:55:30 by isojo-go          #+#    #+#             */
/*   Updated: 2022/07/17 17:25:01 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_isprintable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_print_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_print_dicterror(void)
{
	write(1, "DictError\n", 10);
}
