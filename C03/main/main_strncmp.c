#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main()
{
	char s1[60] = "Nada a ver";
	char s2[60] = "Nada A ver";
	//char s3[60] = "Teste";

	printf("%d", ft_strncmp(s1, s2, 5));
}