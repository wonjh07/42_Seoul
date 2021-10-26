#include <unistd.h>

int		ft_strlen(char *str);

int		base_check(char *base, int l);

char	*ft_putnbr_base(int nbr, char *base);

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		result_integer;
	char	*result_converted;

	result_integer = ft_atoi_base(nbr, base_from);
	result_converted = ft_putnbr_base(result_integer, base_to);
	return (result_converted);
}
