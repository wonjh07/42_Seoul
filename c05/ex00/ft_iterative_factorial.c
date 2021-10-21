int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 1)
		return (0);
	while (nb >= 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}