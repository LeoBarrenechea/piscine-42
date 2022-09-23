int	ft_iterative_factorial(int nb)
{
    unsigned int result;

    result = 1;
    if (nb < 0)
        return(0);
    while (0 < nb)
    {
        result *= nb;
        nb--;
    }
    return(result);
}
