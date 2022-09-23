int ft_is_prime(int nb)
{
    int num;

    num = 2;
    if (nb < 2)
        return (0);
    while (num <= nb / 2)
    {
        if (nb % num == 0)
            return (0);
        num++;
    }
    return(1);
}
int ft_find_next_prime(int nb)
{
    while (!ft_is_prime(nb))
        nb++;
    return(nb);
}