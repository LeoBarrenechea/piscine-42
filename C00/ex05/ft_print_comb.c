#include <unistd.h>

void ft_print_comb(void)
{
	int n;
	int u;
	int m;

	n = '0';
	while (n <= '7')
	{
		u = n + 1; 
		while (u <= '8')
		{
			m = u + 1;
			while (m <= '9')
			{
				write (1, &n, 1);
				write (1, &u, 1);
				write (1, &m, 1);
				if (!(n == '7' && u == '8' && m == '9'))
					write (1, ", ", 2);
				m++;
			}
			u++;
		}
		n++;
	}
}
