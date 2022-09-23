/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_correctbox.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescubi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:10:47 by eescubi           #+#    #+#             */
/*   Updated: 2022/07/10 12:10:51 by eescubi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*           nside x, y , dx, dy is vars                                      */
/*           coords is x, y, dx, dy                                           */
/*                                                                            */
/* ************************************************************************** */

int	ft_correctitem(int box[6][6], int nside, int i, int j);
int	ft_checkline(int box[6][6], int nside, int coords[4]);
int	*ft_setcoords(int x, int y, int dx, int dy);

int	ft_correctbox(int box[6][6], int nside)
{
	int	i;
	int	j;
	int	correct;

	i = 1;
	correct = 1;
	while (i <= nside && correct)
	{
		j = 1;
		while (j <= nside && correct)
		{
			correct = ft_correctitem(box, nside, i, j);
			j++;
		}
		i++;
	}
	return (correct);
}

int	ft_correctitem(int box[6][6], int nside, int i, int j)
{
	int	*coords;

	if (i == 1)
	{
		coords = ft_setcoords(1, j, 0, 1);
	}
	else
	{
		if (i == 2)
		{
			coords = ft_setcoords(nside, j, 0, -1);
		}
		else
		{
			if (i == 3)
			{
				coords = ft_setcoords(j, 1, 1, 0);
			}
			else
			{
				coords = ft_setcoords(j, nside, -1, 0);
			}
		}
	}
	return (ft_checkline(box, nside, coords));
}

int	ft_checkline(int box[6][6], int nside, int c[4])
{
	int	counter;
	int	i;
	int	max;

	i = 1;
	counter = 1;
	max = box[c[0] + i * c[3] - 1 * c[3]][c[1] + i * c[2] - 1 * c[2]];
	while (i <= nside)
	{
		if (box[c[0] + i * c[3] - 1 * c[3]][c[1] + i * c[2] - 1 * c[2]] > max)
		{
			max = box[c[0] + i * c[3] - 1 * c[3]][c[1] + i * c[2] - 1 * c[2]];
			counter++;
		}
		i++;
	}
	if (counter == box[c[0] - c[3]][c[1] - c[2]])
		return (1);
	return (0);
}

int	*ft_setcoords(int x, int y, int dx, int dy)
{
	static int	coords[4];

	coords[0] = x;
	coords[1] = y;
	coords[2] = dx;
	coords[3] = dy;
	return (coords);
}
