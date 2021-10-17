#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	main(int ac, char *av[])
{
	int		**m;
	int		i;
	int		j;
	int		d;

	*m = malloc(sizeof(int *) * 6);
	i = 0;
	while (i < 6)
	{
		m[i] = malloc(sizeof(int) * 6);
		i++;
	}
	i = 0;
	d = 0;
	while (i <= 5)
	{
		j = 1;
		while (j <= 4)
		{
			m[i][j] = *av[d];
			m[j][i] = *av[d + 16];
			j ++;
			d += 2;
		}
		i += 5;
	}
	i = 0;
	while (i <= 5)
	{
		j = 0;
		while (j <= 5)
		{
			if (m[i][j] == '\0')
				printf(" ");
			printf("%c ", m[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
