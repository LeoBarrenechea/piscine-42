/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarrene <lbarrene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:57:31 by lbarrene          #+#    #+#             */
/*   Updated: 2022/07/13 11:27:38 by lbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{	
	int	start;

	start = 0;
	while (start < size / 2)
	{
		ft_swap(&tab[size - start - 1], &tab[start]);
			start++;
	}
}

int main(void)
/*{
	int size;
	int tab[] = {1, 2, 3, 4, 5, 6};
	size = 2;
	printf("%d %d\n", tab[0],tab[1]);
	ft_rev_int_tab(tab, size);
	printf("%d %d", tab[0],tab[1]);
}*/
