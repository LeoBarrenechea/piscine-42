/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <jperez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:20:49 by isojo-go          #+#    #+#             */
/*   Updated: 2022/07/17 21:22:21 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_advance_spaces(char *str, int i)
{
	while (*(str + i) && ft_isspace(*(str + i)))
		i++;
	i--;
	return (i);
}

int	ft_line_ok(char *str)
{
	int	i;
	int	sflag;

	sflag = 0;
	i = 0;
	while (*(str + i))
	{
		if (ft_isnum(*(str + i)) == 1 && sflag == 0)
			sflag = 0;
		else if (ft_isspace(*(str + i)) == 1 && i != 0 && sflag == 0)
		{
			sflag = 1;
			i = ft_advance_spaces(str, i);
		}
		else if (*(str + i) == ':' && (sflag == 0 || sflag == 1))
			sflag = 1;
		else if (ft_isspace(*(str + i)) && (sflag == 1 || sflag == 2))
			sflag = 2;
		else if (ft_isprintable(*(str + i)) && (sflag == 2 || sflag == 3))
			sflag = 3;
		else
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_dict(char *filename)
{
	int		file;
	char	line[200];
	char	c;
	int		i;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	i = 0;
	while (read(file, &c, 1) > 0)
	{
		if (c != '\n')
			*(line + i++) = c;
		else
		{
			*(line + i) = '\0';
			if (*line == '\0' && i != 0)
				return (1);
			if (ft_line_ok(line) == 0 || (i > 200))
				return (0);
			i = 0;
		}
	}
	close(file);
	return (1);
}
