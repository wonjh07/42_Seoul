void	ft_putchar(char c);

void	rush(int w, int h)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y <= h)
	{
		if (y == 1)
			ft_putchar('A');
		else if (y == h)
			ft_putchar('B');
		else if (y == h)
			ft_putchar('C');
		else
			ft_putchar(' ');
		y += 1;
	}
}
