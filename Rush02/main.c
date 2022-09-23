/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <jperez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:35:04 by jperez            #+#    #+#             */
/*   Updated: 2022/07/17 22:46:00 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_args_ok(int argc, char **argv, char **input)
{
	if (argc == 2 && ft_is_numeric(*(argv + 1)))
	{
		*input = *(argv + 1);
		return (1);
	}	
	else if (argc == 3 && ft_is_numeric(*(argv + 2)))
	{
		*input = *(argv + 2);
		return (1);
	}
	else
	{
		ft_print_error();
		return (0);
	}
}

int	main(int argc, char **argv)
{
	char	dict[50];
	char	*input;
	char	**array_num;
	char	**array_text;

	if (ft_args_ok(argc, argv, &input) == 0)
		return (0);
	array_num = NULL;
	array_text = NULL;
	if (argc == 3)
		ft_strcpy(dict, *(argv + 1));
	else
		ft_strcpy(dict, "numbers.dict");
	if (ft_check_dict(dict) == 0)
	{
		ft_print_dicterror();
		return (0);
	}
	array_text = ft_inicialize_text(dict, array_text);
	array_num = ft_read_numbers(array_num, dict);
	ft_sort_array(ft_count_lines(dict), array_num, array_text);
	ft_print(input, array_num, array_text);
	free(array_num);
	free(array_text);
	return (0);
}
