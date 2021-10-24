#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	printf("%c\n", **av);
	printf("%c\n", *av[0]);
	printf("%s\n", *av);
	printf("%s\n", av[1]);
	printf("%c\n", av[1][0]);
	printf("%c\n", av[1][1]);
	printf("%c\n", av[1][2]);
	printf("%c\n", av[1][3]);
	printf("%c\n", av[1][4]);
	return (0);
}
