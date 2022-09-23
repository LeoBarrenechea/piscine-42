/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <jperez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:10:07 by isojo-go          #+#    #+#             */
/*   Updated: 2022/07/17 10:42:58 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

void	ft_sort_array(int size, char **array, char **array2)
{
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (ft_strcmp2(*(array + i), *(array + i + 1)) <= 0)
			i++;
		else
		{
			ft_swap_str((array + i), (array + i + 1));
			ft_swap_str((array2 + i), (array2 + i + 1));
			i = 1;
		}
	}
}
