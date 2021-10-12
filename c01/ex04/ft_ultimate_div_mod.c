#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = (*a) / (*b);
		mod = (*a) % (*b);
		*a = div;
		*b = mod;
	}
}

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	i;
	int	j;
	int	*a;
	int	*b;

	i = 11;
	j = 5;
	a = &i;
	b = &j;
	printf("%d /", i);
	printf(" %d\n", j);
	ft_ultimate_div_mod(a, b);
	printf("div (*a) = %d\n", *a);
	printf("mod (*b) = %d", *b);
}
