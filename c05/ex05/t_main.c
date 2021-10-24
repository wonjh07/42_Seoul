#include <stdio.h>
#include <limits.h>
#include "ft_sqrt.c"

int	main(void)
{
	int	number;
	int	c;

	c = 0;
	number = -4800;
	while (c < 2000)
	{
		printf("sqrt(%d) = %d\n", number, ft_sqrt(number));
		number++;
		c++;
	}
	printf("sqrt(%d) = %d\n", 1000000, ft_sqrt(1000000));
	printf("sqrt(%d) = %d\n", INT_MAX, ft_sqrt(INT_MAX));
	printf("sqrt(%d) = %d\n", INT_MIN, ft_sqrt(INT_MIN));
	printf("sqrt(%d) = %d\n", 2147395600, ft_sqrt(2147395600));
	printf("sqrt(%d) = %d\n", 2147483640, ft_sqrt(2147483640));
}
