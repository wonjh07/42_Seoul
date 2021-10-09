void	ft_putchar(char c);

void	ft_first_line(int j, int g)
{
	while (j <= g)
	{
		if (j == 1)
			ft_putchar('A');
		else if (j == g)
			ft_putchar('C');
		else
			ft_putchar('B');
		j += 1;
	}
	ft_putchar('\n');
}

void	ft_end_line(int m, int n)
{
	while (m <= n)
	{
		if (m == 1)
			ft_putchar('A');
		else if (m == n)
			ft_putchar('C');
		else
			ft_putchar('B');
		m += 1;
	}
}

void	ft_mid_line(int k, int i)
{
	while (k <= i)
	{
		if (k == 1 || k == i)
			ft_putchar('B');
		else
			ft_putchar(' ');
		k += 1;
	}
	ft_putchar('\n');
}

void	rush(int w, int h)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y <= h)
	{
		if (y == 1)
			ft_first_line(x, w);
		else if (y == h)
			ft_end_line(x, w);
		else
			ft_mid_line(x, w);
		y += 1;
	}
}
