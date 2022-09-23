/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarrene <lbarrene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 09:50:00 by eescubi           #+#    #+#             */
/*   Updated: 2022/07/12 16:23:29 by lbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*          nside_i_j_cont_correct is vars                                    */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkpars(char *pars, int *parschecked, int nside);

void	ft_boxgeneration(int box[6][6], int nside, int rowcol[], int value);
void	ft_loadpars(int box[6][6], int *parschecked, int nside);

void	ft_loadinitial(int box[6][6], int nside);
	void	ft_genandcheck(int box[6][6], int vars[5]);
	int		ft_correctbox(int box[6][6], int nside);

void	ft_print_error(char	*msg);
void	ft_printbox(int box[6][6], int nside);


int	main(int npar, char **pars)
{
	int		parschecked[16];
	int		box[6][6];
	int		vars[5];

	vars[0] = 4;
	vars[4] = 0;
	if (npar == 2 && ft_checkpars(pars[1], parschecked, vars[0]))
	{
		ft_loadpars(box, parschecked, vars[0]);
		ft_loadinitial(box, vars[0]);
		ft_genandcheck(box, vars);
	}
	else
	{
		vars[4] = 0;
	}
	if (!vars[4])
	{
		ft_print_error("Error\n");
	}
	else
	{
		ft_printbox(box, vars[0]);
	}
}

void	ft_genandcheck(int box[6][6], int vars[5])
{
	int		initial[2];

	initial[0] = 1;
	initial[1] = 1;
	vars[1] = 0;
	vars[4] = 0;
	while (vars[1] < vars[0] && !vars[4])
	{
		vars[2] = 0;
		ft_boxgeneration(box, vars[0], initial, vars[1] + 1);
		while (vars[2] < 24 && !vars[4])
		{
			if (ft_correctbox(box, vars[0]))
			{
				vars[4] = 1;
			}
			vars[2]++;
		}
		vars[1]++;
	}	
}
