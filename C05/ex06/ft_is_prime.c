int ft_is_prime(int nb)
{
    int num;

    num = 2;
    if (nb < 2)
        return (0);
    while(num <= nb / 2)
    {
        if (nb % num == 0)
            return(0);
        num++;
    }
    return (1);    
}