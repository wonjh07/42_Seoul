int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

int	base_check(char *base, int l)
{
	int		i;
	int		j;

	if (l < 2)
		return (0);
	i = 0;
	while (i < l - 1)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < '!' || base[i] > '~')
			return (0);
		j = i + 1;
		while (j < l)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_test(char str, char *base)
{
	int	num;

	num = 0;
	while (base[num])
	{
		if (str == base[num])
			return (num);
		num++;
	}
	return (0);
}

int	ft_atoi(char *str, int length, char *base)
{
	int		i;
	int		negative;
	int		result;
	int		tmp;

	i = 0;
	negative = 1;
	result = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		tmp = ft_atoi_test(str[i], base);
		result = (result * length) + (tmp);
		i++;
	}
	return (result * negative);
}

int	ft_atoi_base(char *str, char *base)
{
	int		length;
	int		st;

	length = ft_strlen(base);
	if (base_check(base, length))
		st = ft_atoi(str, length, base);
	return (st);
}
