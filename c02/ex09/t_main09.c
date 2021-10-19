#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str1[] = "ReKt17+LOl MDR Mdr 4242L42$";

	char str2[] = "YJe|IS.<,25Uk@    /CX`HVn<+?Z=|;@]@Q^^";

	char empty[] = "";

	printf("\n-----\nBEF = %s", str1);
	printf("\nAFT = %s\n", ft_strcapitalize(str1));
	printf("\nBEF = %s", str2);
	printf("\nAFt = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));
}
