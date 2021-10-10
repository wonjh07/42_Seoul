void	ft_putchar(char c);

void	rush(int w, int h)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y <= h)
	{
		while (x <= w)
		{
			if (((y == 1) && (x == 1)) || ((y == h) && (x == w)))
				ft_putchar('A');
			else if (((y == 1) && (x == h)) || ((y == h) && (x == 1)))
				ft_putchar('C');
			else if ((y == 1) && (y == h))
				ft_putchar('B');
			else
				ft_putchar(' ');
			x += 1;
		}
		y += 1;
		ft_putchar('\n');
	}
}
