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

void	ft_putnbr_base(int nbr, char *base)
{
	int		length;
	int		nb;

	nb = nbr;
	length = ft_strlen(base);
	if (base[0] == '\0' || base[1] == '\0')
		write(1, "\0", 1);
	else if (base_check(base, length) == 1)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		else if (nb < length)
			write(1, &base[nb], 1);
		else if (nb >= length)
		{
			ft_putnbr_base(nb / length, base);
			ft_putnbr_base(nb % length, base);
		}
	}
}
