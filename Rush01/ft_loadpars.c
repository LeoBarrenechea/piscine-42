/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loadpars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescubi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:53:27 by eescubi           #+#    #+#             */
/*   Updated: 2022/07/09 17:53:29 by eescubi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_loadpars(int box[6][6], int *parschecked, int nside)
{
	int	i;
	int	j;

	i = 0;
	while (i < nside + 2)
	{
		j = 0;
		while (j < nside + 2)
		{
			box[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	j = 1;
	while (j <= nside)
	{
		box[i][j] = parschecked[j - 1];
		box[nside + 1][j] = parschecked[nside + j - 1];
		box[j][i] = parschecked[2 * nside + j - 1];
		box[j][nside + 1] = parschecked[3 * nside + j - 1];
		j++;
	}
}
