#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	**m = malloc(sizeof(char *) * 6);
	int		i;
	int		j;
	int		d;
	char	*a = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";

	i = 0;
	while (i < 6)
	{
		m[i] = malloc(sizeof(char) * 6);
		i++;
	}
	i = 0;
	d = 0;
	while (i <= 5)
	{
		j = 1;
		while (j <= 4)
		{
			m[i][j] = a[d];
			m[j][i] = a[d + 16];
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
