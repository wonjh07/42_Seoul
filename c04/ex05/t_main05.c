#include <stdio.h>
#include "ft_atoi_base.c"

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%d\n", ft_atoi_base("-123456", "0123456789"));
	printf("%d\n", ft_atoi_base("-11110001001000000", "01"));
	printf("%d\n", ft_atoi_base("-1e240", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("-12422311", "01234"));
	printf("%d\n", ft_atoi_base("-hiid", "0123456789abcdefghi"));
}
