/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarrene <lbarrene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:59:40 by lbarrene          #+#    #+#             */
/*   Updated: 2022/07/17 10:23:11 by lbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
		i++;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
		if (!((str[i - 1] >= 'A') && (str[i - 1] <= 'Z'))
			&& (!((str[i - 1] >= 'a') && (str[i - 1] <= 'z')))
			&& (!((str[i - 1] >= '0') && (str[i - 1] <= '9')))
			&& ((str[i] >= 'a') && (str[i] <= 'z')))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*int		main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	char str2[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";

	char empty[] = "";

	printf("\n-----\nBEF = %s", str1);
	printf("\nAFT = %s\n", ft_strcapitalize(str1));
	printf("\nBEF = %s", str2);
	printf("\nAFt = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));
}*/
