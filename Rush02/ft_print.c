/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarrene <lbarrene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/07/17 20:29:18 by jperez            #+#    #+#             */
/*   Updated: 2022/07/17 22:52:24 by lbarrene         ###   ########.fr       */
=======
/*   Created: 2022/07/17 22:44:05 by jperez            #+#    #+#             */
/*   Updated: 2022/07/17 22:55:43 by jperez           ###   ########.fr       */
>>>>>>> 1b19021eb28e0d103652f1567f58602d86cdaea0
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_put_surname(int lenght, char **array_num)
{
	int	i;

	i = 0;
	while (array_num[i])
	{
		if (ft_strlen(array_num[i]) == lenght)
			return (i);
		i++;
	}
	return (1);
}

int	ft_one_to_nine(char num, char **array_num)
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (array_num[i][j])
		{
			if (array_num[i][j] == num)
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_find_number(char num, int lenght, char **array_num)
{
	int	i;

	i = 0;
	while (array_num[i])
	{
		if (ft_strlen(array_num[i]) == lenght && num == array_num[i][0])
			return (i);
		i++;
	}
	i = 0;
	while (array_num[i])
	{
		if (ft_strlen(array_num[i]) == lenght)
			return (i);
		i++;
	}
	return (1);
}

void	ft_print(char *input, char **array_num, char **array_text)
{
	int	i;
	int	lenght;

	lenght = ft_strlen(input);
	i = 0;
	while (input[i])
	{
		if (ft_put_surname(lenght, array_num) != 1 && lenght > 3)
			printf("%s %s ", array_text[ft_one_to_nine(input[i],
					array_num)], array_text[ft_put_surname(lenght, array_num)]);
		else if (lenght % 3 == 0)
		{
			printf("%s %s ",
				array_text[ft_one_to_nine(input[i], array_num)],
				array_text[ft_find_number(input[i], 3, array_num)]);
			printf("%s ",
				array_text[ft_find_number(input[i + 1], 2, array_num)]);
			printf("%s ", array_text[ft_one_to_nine(input[i + 2], array_num)]);
		}
		else if (ft_num_group(lenght - i, 2) == 2 && input[i] != '0')
			ft_putstr(array_text[ft_find_number(input[i], 2, array_num)]);
		else if (ft_num_group(lenght - i, 1) == 1 && input[i] != '0')
			ft_putstr(array_text[ft_one_to_nine(input[i], array_num)]);
		i++;
	}
}
