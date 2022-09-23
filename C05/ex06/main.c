#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
    printf("%d", ft_is_prime(0));
    printf("%d", ft_is_prime(1));
    printf("%d", ft_is_prime(2));
    printf("%d", ft_is_prime(3));
    printf("%d", ft_is_prime(4));
    printf("%d", ft_is_prime(5));
    printf("%d", ft_is_prime(6));
    printf("%d\n", ft_is_prime(11));
    return (0);
}