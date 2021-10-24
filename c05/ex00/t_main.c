#include <stdio.h>
#include "ft_iterative_factorial.c"

int	main(void)
{
	int	n;

	n = 0;
	while (n < 7)
	{
		printf("fact(%d) = %d\n", n, ft_iterative_factorial(n));
		n++;
	}
}
