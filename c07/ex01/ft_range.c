#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	*num;
	int	c;

	diff = max - min;
	if (min >= max)
		return (0);
	num = malloc(sizeof(int) * diff);
	c = 0;
	while (min < max)
	{
		num[c] = min;
		c++;
		min++;
	}
	return (num);
}
