int ft_sqtr(int nb)
{
    int    n;
    
    n = 1;
    if  (nb > 0)
    {
        while (n * n <= nb)
        {
            if (n * n == nb)
                return (n);
            n++;
        }
    }
    return (0);
}