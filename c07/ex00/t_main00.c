#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_strdup.c"

int	main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("x  : base  : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("c  : alloc : $%s$ @ %p\n", allocated, allocated);
	free(allocated);
	allocated = ft_strdup(str);
	printf("ft : alloc : $%s$ @ %p\n", allocated, allocated);
	printf("## if alloc results are same and addresses are diffrent, it's OK\n");
	free(allocated);
}
