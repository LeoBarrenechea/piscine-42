#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[20] = "bonjour";
	char	src[] = " les amis ";

	printf("%s\n", ft_strcat(dest, src));
	//printf(".%s.\n", strcat(dest, src));
}
