/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarrene <lbarrene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:55:26 by lbarrene          #+#    #+#             */
/*   Updated: 2022/07/14 11:19:13 by lbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str [i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char	string[] = "sdfdsfFSFAsdf";
	printf("%s", ft_strupcase(string));
}*/
