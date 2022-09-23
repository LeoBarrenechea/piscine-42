#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int main()
{
	char	a[40] = "leonardo";
	char	b[] = " barrenechea";
	printf("%s\n", strncat(a, b, 5));
	printf("%s\n", ft_strncat(a, b, 5));
}