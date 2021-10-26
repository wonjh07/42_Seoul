#include <stdlib.h>
#include <stdio.h>
#include "ft_strjoin.c"

int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char **)malloc(5 * sizeof(strs));
	strs[0] = "lol";
	strs[1] = "123";
	strs[2] = "poi";
	strs[3] = "456";
	strs[4] = "erb";
	separator = ":haha:";
	index = 0;
	while (index < 6)
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d : $%s$\n", index, result);
		free(result);
		index++;
	}
}
