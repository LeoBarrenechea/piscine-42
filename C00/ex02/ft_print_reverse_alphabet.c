void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char rev;

	rev = 'z';
	while ( 'a' <= rev)
	{
		ft_putchar(rev);
		rev--;
	}
}
