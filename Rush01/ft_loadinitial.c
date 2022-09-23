/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loadinitial.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescubi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:08:25 by eescubi           #+#    #+#             */
/*   Updated: 2022/07/10 19:47:11 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_loadinitial(int box[6][6], int nside)
{
	int	i;
	int	j;
	int	value;

	i = 1;
	value = 1;
	while (i <= nside)
	{
		j = 1;
		while (j <= nside)
		{
			box[i][j] = value;
			j++;
			value++;
			if (value > nside)
				value = 1;
		}
		i++;
		value++;
		if (value > nside)
			value = 1;
	}
}
