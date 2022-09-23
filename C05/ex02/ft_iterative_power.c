int ft_iterative_power(int nb, int power)
{
    unsigned int result;

    result = nb;
    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    while (1 <= power)
    {
        result *= nb;
        power--;
    }
    return (result);
}