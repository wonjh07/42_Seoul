void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	*string;

	string = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	ft_print_memory(string, 92);
}
