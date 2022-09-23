/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <jperez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:06:19 by jperez            #+#    #+#             */
/*   Updated: 2022/07/17 22:45:41 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH02_H
# define FT_RUSH02_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_strlen(char *str);
void	ft_strcpy(char *dest, char *src);
void	ft_swap_str(char **a, char **b);
int		ft_strcmp(char *s1, char *s2);
int		ft_isnum(char c);
int		ft_isspace(char c);
void	ft_print_error(void);
void	ft_print_dicterror(void);
char	**ft_save_space(char **str, int lines);
int		ft_check_dict(char *filename);
int		ft_is_numeric(char *str);
char	**ft_read_numbers(char **str, char *dict_name);
char	**ft_read_str(char **str, char *dict_name, int *i, int *j);
void	ft_sort_array(int size, char **array, char **array2);
int		ft_strcmp2(char *s1, char *s2);
char	**ft_inicialize_text(char *dict_name, char **arr_text);
int		ft_count_lines(char *dict_name);
void	ft_print(char *input, char **array_num, char **array_text);
int		ft_compare_lenght(int lenght, char **array_num);
int		ft_isprintable(char c);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_count_lines(char *dict_name);

#endif
