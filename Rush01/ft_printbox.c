/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbox.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescubi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:12:01 by eescubi           #+#    #+#             */
/*   Updated: 2022/07/10 19:49:59 by lbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printbox(int box[6][6], int nside)
{
	int	i;
	int	j;
	int	c;

	i = 1;
	while (i <= nside)
	{
		j = 1;
		while (j <= nside)
		{
			c = box[i][j] + 48;
			write (1, &c, 1);
			if (j != nside)
			{
				c = ' ';
				write (1, &c, 1);
			}
			j++;
		}
		c = '\n';
		write (1, &c, 1);
		i++;
	}
}
