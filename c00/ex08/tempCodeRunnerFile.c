#include <unistd.h>

void	ft_putchar1(char c)
{
	write(1, &a, 1);
}

void	ft_start_number(char t)
{
	int	number[9];

	while (t > 0)
	{
		number[t - 1] = t;
		t -= 1;
	}
}
