#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	*num;
	int	c;

	diff = max - min - 1;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	num = malloc(sizeof(int) * diff);
	if (num == NULL)
	{
		*range = 0;
		return (-1);
	}
	c = 0;
	while (min < max)
	{
		num[c] = min;
		c++;
		min++;
	}
	*range = num;
	return (diff);
}
