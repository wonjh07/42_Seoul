int	ft_iterative_power(int nb, int power)
{
	int	c;
	int	result;

	if (power < 0)
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
