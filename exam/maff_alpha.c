#include <unistd.h>

int	main(void)
{
	char	c;
	char	upper;
	char	lower;

	c = 0;
	while (upper <= 'w')
	{	
		upper = c + 'a';
		lower = c + 'B';
		write (1, &upper, 1);
		write (1, &lower, 1);
		c += 2;
	}
	return (0);
}
