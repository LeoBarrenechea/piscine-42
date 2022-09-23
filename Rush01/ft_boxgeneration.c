/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rowgeneration.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescubi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:37:42 by eescubi           #+#    #+#             */
/*   Updated: 2022/07/09 19:37:43 by eescubi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_boxgeneration(int box[6][6], int nside, int rowcol[], int value)
{
	if (rowcol[0] <= nside)
	{
		if (rowcol[1] <= nside)
		{
			box[rowcol[0]][rowcol[1]] = value;
			value = value % 4 + 1;
			rowcol[1]++;
			ft_boxgeneration(box, nside, rowcol, value);
		}
		else
		{
			rowcol[0]++;
			ft_boxgeneration(box, nside, rowcol, value);
		}
	}
}
