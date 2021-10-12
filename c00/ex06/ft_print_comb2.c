#include<unistd.h>

void	ft_putchar(char h)
{
	write(1, &h, 1);
}

void	ft_putchar2(char i, char j)
{
	write(1, &i, 1);
	write(1, &j, 1);
}

void	ft_print_two_digit(char c)
{
	char	first_digit;
	char	second_digit;

	if (c < 10)
	{
		second_digit = c + '0';
		ft_putchar2('0', second_digit);
	}
	else
	{
		first_digit = (c / 10) + '0';
		second_digit = (c % 10) + '0';
		ft_putchar2(first_digit, second_digit);
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_two_digit(a);
			ft_putchar(' ');
			ft_print_two_digit(b);
			if (!(a == 98 && b == 99))
				ft_putchar2(',', ' ');
			b += 1;
		}
		a += 1;
	}
}
