#include <unistd.h>

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

int	convert(int nbr, char *base, int l)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		convert(nbr, base, l);
		return (0);
	}
	if (nbr >= l)
	{
		convert(nbr / l, base, l);
		convert(nbr % l, base, l);
		return (0);
	}
	write(1, &(base[nbr]), 1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		length;

	length = ft_strlen(base);
	if (base_check(base, length))
		convert(nbr, base, length);
	write(1, "\n", 1);
}
