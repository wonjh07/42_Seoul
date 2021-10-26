#include <stdio.h>
#include "ft_putnbr_base.c"

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(-123456, "0123456789");
	ft_putnbr_base(-1111000, "01ab");
	ft_putnbr_base(-12422311, "01234");
	return (0);
}
