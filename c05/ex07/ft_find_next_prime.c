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

int	ft_sqrt2(int nb)
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
	return (i - 1);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= ft_sqrt2(nb))
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{	
	if (nb < 0)
		return (0);
	while (nb < 2147483647 && ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
