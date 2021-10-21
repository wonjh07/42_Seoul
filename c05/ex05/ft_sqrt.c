int	ft_iterative_power(int nb, int power)
{
	int	c;
	int	result;

	if (nb < 0)
		return (0);
	c = 0;
	result = 1;
	while (c < power)
	{
		result = result * nb;
		c++;
	}
	return (result);
}

int	ft_sqrt(int nb)
{
	int	i;
	int	current;

	i = 0;
	current = 0;
	while (current < nb)
	{
		current = ft_iterative_power(i, 2);
		if (current == nb)
			return (i);
		i++;
	}
	return (0);
}
