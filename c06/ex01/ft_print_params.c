#include <unistd.h>

int	main(int ac, char **str)
{
	int	i;

	i = 1;
	if (ac <= 1)
		return (0);
	while (i < ac)
	{
		while (*str[i] != '\0')
		{
			write(1, str[i], 1);
			str[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
