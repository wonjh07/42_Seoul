#include <unistd.h>

void	aff_a(char *a)
{
	int	c;

	c = 0;
	if (a[c] == '\0')
		write(1, "a", 1);
	while (a[c] != '\0')
	{
		if (a[c] == 'a')
		{
			write(1, "a", 1);
			break ;
		}
		c ++;
	}
}

int	main(void)
{
	aff_a("");
	return (0);
}
