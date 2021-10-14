void	ft_counting_sort(int *tab, int *count)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		if (count[i] != 0)
		{
			while (count[i] > 0)
			{
				tab[j] = i;
				count[i] -= 1;
				j++;
			}
		}
		i += 1;
	}
}

void	ft_sort_int_tab(int	*tab, int size)
{
	int	count[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		count[i] = 0;
		i++;
	}
	i = 0;
	while (i < size)
	{	
		count[tab[i]] += 1;
		i++;
	}
	ft_counting_sort(tab, count);
}
