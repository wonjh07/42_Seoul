#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 11;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, left %d\n", a, b, div, mod);
}
