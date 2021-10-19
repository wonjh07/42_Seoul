#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "012340123456789";
	char to_find[] = " ";

	printf("-----\nstr = %s\nto_find = %s\n", str, to_find);
	printf("%s\n", ft_strstr(str, to_find));
	printf("real_command: %s", strstr(str, to_find));
	return (0);
}
