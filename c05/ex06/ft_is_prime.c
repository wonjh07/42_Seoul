int	ft_sqrt2(int nb)
{
	long long	i;
	long long	current;

	i = 0;
	current = 0;
	if (nb > 0)
	{
		while ((current < nb) && (i < 46341))
		{
			current = i * i;
			if (current == nb)
				return (i);
			i++;
		}
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	j;

	j = 3;
	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if ((nb % 2) == 0)
		return (0);
	while (j <= ft_sqrt2(nb) && j < 46341)
	{
		if (nb % j == 0)
			return (0);
		j += 2;
	}
	return (1);
}
