/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <jperez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:08:29 by lbarrene          #+#    #+#             */
/*   Updated: 2022/07/17 20:00:46 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_return_number(char *str, int size)
{
	int	i;
	int	inte;

	size = 1;
	inte = 0;
	i = 0;
	while (ft_is_numeric(&str[i]))
	{
		inte = inte * 10 + (str[i] - 48);
		i++;
	}
	return (i);
}
