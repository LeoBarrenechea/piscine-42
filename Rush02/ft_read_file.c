/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <jperez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:12:48 by jperez            #+#    #+#             */
/*   Updated: 2022/07/17 22:44:52 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_count_lines(char *dict_name)
{
	int		cont;
	int		file;
	char	c;

	file = open(dict_name, O_RDONLY);
	cont = 0;
	while ((read(file, &c, sizeof(c))) > 0)
		if (c == '\n')
			cont++;
	close (file);
	return (cont + 1);
}

char	**ft_save_space(char **str, int lines)
{
	int	i;

	str = (char **) malloc(sizeof(char *) * lines);
	if (str == NULL)
	{
		write(1, "ERROR: The space could not be reserved!\n", 40);
		return (0);
	}
	i = 0;
	while (i < lines)
	{
		str[i] = (char *) malloc(sizeof(char) * 100);
		if (str[i] == NULL)
		{
			write(1, "ERROR: The space could not be reserved!\n", 40);
			return (0);
		}
		i++;
	}
	return (str);
}

char	**ft_read_numbers(char **str, char *dict_name)
{
	int		file;
	int		i;
	int		j;
	char	c;

	str = ft_save_space(str, ft_count_lines(dict_name));
	file = open(dict_name, O_RDONLY);
	i = 0;
	j = 0;
	while ((read(file, &c, sizeof(c))) > 0)
	{
		if ('0' <= c && c <= '9')
		{
			str[i][j] = c;
			j++;
		}
		if (c == ':')
		{
			j = 0;
			i++;
		}
	}
	close (file);
	return (str);
}

char	**ft_read_str(char **str, char *dict_name, int *i, int *j)
{
	int		file;
	char	c;
	int		cont;

	str = ft_save_space(str, ft_count_lines(dict_name));
	file = open(dict_name, O_RDONLY);
	cont = 0;
	while ((read(file, &c, sizeof(c))) > 0)
	{
		if ((c == ':') || (c == ' ' && cont > 0))
			cont++;
		else if (31 < c && c < 127 && cont > 0 && c != ':')
		{
			str[*i][*j] = c;
			*j = *j + 1;
		}
		else if (c == '\n')
		{
			*i = *i + 1;
			*j = 0;
			cont = 0;
		}
	}
	close (file);
	return (str);
}

char	**ft_inicialize_text(char *dict_name, char **arr_text)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	arr_text = ft_read_str(arr_text, dict_name, &i, &j);
	return (arr_text);
}
