/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarrene <lbarrene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:05:34 by lbarrene          #+#    #+#             */
/*   Updated: 2022/07/20 12:20:47 by lbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	y;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			y = i;
			j = 0;
			while (to_find[j] && str[y] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[i]);
					y++;
					j++;
			}
		}
		i++;
	}
	return (0);
}
