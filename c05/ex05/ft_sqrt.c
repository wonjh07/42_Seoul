int	ft_sqrt(int nb)
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
	return (0);
}
