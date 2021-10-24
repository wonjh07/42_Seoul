#include <stdio.h>

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
	char	*tmp;

	tmp = base;
	i = 0;
	while (i < l - 1)
	{
		if ((tmp[i] != '+' && tmp[i] != '-')
			|| (tmp[i] < '!' || tmp[i] > '~'))
			return (0);
		j = i + 1;
		while (j < l)
		{
			if (tmp[i] == tmp[j])
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

long	ft_atoi(char *str, int length, char *base)
{
	int		i;
	int		negative;
	int		result;
	int		tmp;
	long	*st;

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
	tmp = ft_atoi_test(str[i], base);
	while (tmp != 0)
	{
		result = (result * length) + (tmp);
		i++;
		tmp = ft_atoi_test(str[i], base);
	}
	return (result * negative);
}

int	ft_atoi_base(char *str, char *base)
{
	int		length;
	long	st;

	if (base_check(base, length) == 0)
		return (0);
	printf("ok");
	length = ft_strlen(base);
	printf("ok");
	st = ft_atoi(str, length, base);
	printf("ok");
	if (base[0] != '\0' || base[1] != '\0')
		return (st);
	return (0);
}
