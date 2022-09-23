int ft_fibonacci(int index)
{
    if (index >= 2)
        return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
    else if (index == '0')
        return (0);
    else if (index == 1)
        return (1);
    


}