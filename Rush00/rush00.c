/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:52:01 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/03 13:36:09 by lbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_lastln(int x)
{
	int	cont;

	cont = 2;
	ft_putchar('o');
	while (cont < x)
	{
		ft_putchar('-');
		cont++;
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	ft_midln(int x)
{
	int	cont;

	cont = 2;
	ft_putchar('|');
	while (cont < x)
	{
		ft_putchar(' ');
		cont++;
	}
	if (x > 1)
		ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1)
	ft_lastln(x);
	ft_putchar('\n');

	if (y < 1)
	ft_midln(x);
	ft_putchar('\n');
}
