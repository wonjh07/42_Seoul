#include <unistd.h>

int	main(int ac, char **str)
{
	if (ac == 1)
	{
		while (*str[0] != '\0')
		{
			write(1, str[0], 1);
			str[0]++;
		}
	}
	return (0);
}
