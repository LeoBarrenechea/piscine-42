/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarrene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:49:35 by lbarrene          #+#    #+#             */
/*   Updated: 2022/07/20 16:11:34 by lbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

void	ft_ultimate_ft(int *********nbr);

int		main (void)
{
	int *********p_nbr;
	int ********p_nbr2;
	int *******p_nbr3;
	int ******p_nbr4;
	int *****p_nbr5;
	int ****p_nbr6;
	int ***p_nbr7;
	int **p_nbr8;
	int *p_nbr9;
	int nbr;

	nbr = 21;
	p_nbr9 = &nbr;
	p_nbr8 = &p_nbr9;
	p_nbr7 = &p_nbr8;
	p_nbr6 = &p_nbr7;
	p_nbr5 = &p_nbr6;
	p_nbr4 = &p_nbr5;
	p_nbr3 = &p_nbr4;
	p_nbr2 = &p_nbr3;
	p_nbr = &p_nbr2;

	printf("%d\n", nbr);
	ft_ultimate_ft(p_nbr);
	printf("%d\n", nbr);
	return (0);
}
