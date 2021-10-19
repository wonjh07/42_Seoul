#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	char s1[] = "Nada a ver";
	char s2[] = "Nada a ver0";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
}
