#include <stdio.h>
#include <limits.h>
#include <math.h>
#include "ft_is_prime.c"

int	is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	main(void)
{
	int	number;
	int	results[2];
	int	count;
	int	c;

	number = 600;
	count = 0;
	c = 0;
	while (c < 100)
	{
		results[0] = is_prime(number);
		results[1] = ft_is_prime(number);
		printf("is_prime(%d) = %d  --  %d\n", number, results[1], results[0]);
		if (results[0] != results[1])
			return (1);
		number++;
		if (results[0])
			count++;
		c++;
	}
	printf("------------------\n");
	printf("is_prime(%d) = %d\n", INT_MIN, is_prime(INT_MIN));
	printf("ft_is_prime(%d) = %d\n", INT_MIN, ft_is_prime(INT_MIN));
	printf("is_prime(%d) = %d\n", INT_MAX, is_prime(INT_MAX));
	printf("ft_is_prime(%d) = %d\n", INT_MAX, ft_is_prime(INT_MAX));
	printf("first 50'000 number, %d prime\n", count);
	return (0);
}
