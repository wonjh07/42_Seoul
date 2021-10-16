#include <unistd.h>

void	ft_print_memory(void *addr, unsigned int size)
{
	
}

int	main(void)
{
	char	*string;

	string = "Bonjour les aminches\t\n\tc est fo";
	ft_print_memory(string, 32);
}
