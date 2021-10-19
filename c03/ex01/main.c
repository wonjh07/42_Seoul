#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "Nada a ver";
	char s2[] = "Nada a ver0";

	printf("%d\n", ft_strncmp(s1, s2, 5));
	printf("%d", strncmp(s1, s2, 5));
}
