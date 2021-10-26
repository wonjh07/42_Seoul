#include <stdio.h>
#include "ft_convert_base.c"
#include "ft_convert_base2.c"

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*result;

	result = ft_convert_base("    -92075301", "0123456789", "oulydefvhI");
	printf("%s", result);
	free(result);
	return (0);
}
