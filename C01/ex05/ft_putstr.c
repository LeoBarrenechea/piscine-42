/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarrene <lbarrene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:23:29 by lbarrene          #+#    #+#             */
/*   Updated: 2022/07/10 18:58:34 by lbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(*(str + i));
		i++;
	}
}
