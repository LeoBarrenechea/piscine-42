#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main()
{
	char str[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char find[] = "2";
	printf("%s", ft_strstr(str, find));
}
