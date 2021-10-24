#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int	result;

	result = 0;
	if (ac < 3)
		return (0);
	if (*av[2] == '+')
		result = atoi(av[1]) + atoi(av[3]);
	printf("%d", result);
	return (0);
}

