int	ft_recursive_power(int nb, int power)
{
	int	c;
	int	result;

	if (power < 0)
		return (0);
	c = 0;
	result = 1;
	while (c < power)
	{
		result = nb * ft_recursive_power(nb, power - 1);
		c++;
	}
	return (result);
}
