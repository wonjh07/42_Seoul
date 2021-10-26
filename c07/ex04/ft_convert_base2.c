#include <unistd.h>
#include <stdlib.h>

int	g_c = 0;

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

char	convert(int nbr, char *base, int l, char *result)
{
	if (nbr < 0)
	{
		result[g_c] = '-';
		g_c++;
		nbr *= -1;
		convert(nbr, base, l, result);
		return (0);
	}
	if (nbr >= l)
	{
		convert(nbr / l, base, l, result);
		convert(nbr % l, base, l, result);
	}
	if (nbr < l)
	{
		result[g_c] = base[nbr];
		g_c++;
	}
	return (0);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		length;
	char	*result;

	length = ft_strlen(base);
	result = malloc(sizeof(char) * (length + 1));
	if (base_check(base, length))
		convert(nbr, base, length, result);
	return (result);
}
