#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		if ((tmp[i] >= '*' && tmp[i] <= '/' || tmp[i] == '=')
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
	long	nb;

	nb = nbr;
	length = ft_strlen(base);
	if (base[0] == '\0' || base[1] == '\0')
		ft_putchar('\0');
	else if (base_check(base, length))
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < length)
			ft_putchar(base[nb]);
		if (nb >= length)
		{
			ft_putnbr_base(nb / length, base);
			ft_putnbr_base(nb % length, base);
		}
	}
}
