/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkpars.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescubi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:14:47 by eescubi           #+#    #+#             */
/*   Updated: 2022/07/10 19:53:21 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkpars(char *pars, int *parschecked, int nside)
{
	int		correct;
	int		i;
	int		j;

	correct = 1;
	i = 0;
	j = 0;
	while (pars[i] != '\0')
	{
		if ((i % 2 == 0 && (pars[i] < '1' || pars[i] > (nside + '0')))
			|| (i % 2 == 1 && pars[i] != ' '))
			correct = 0;
		if (correct && i % 2 == 0)
		{
			parschecked[j] = pars[i] - '0';
			j++;
		}
		i++;
	}
	if (i != (nside * 8) - 1)
		correct = 0;
	return (correct);
}
