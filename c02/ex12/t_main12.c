unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char		*string;

	string = "Bonjour les ami";
	ft_print_memory(string, ft_strlen(string));
}
