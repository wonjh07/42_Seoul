#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;
	char *str6;
	char *str7;
	char *str8;
	char *str9;

	str1 = "Hello";
	str2 = "apple";
	str3 = "";
	str4 = "ABCD";
	str5 = "abcdEghe";
	str6 = "Hello World!";
	str7 = "HelLO wOrLd!";
	str8 = "hELlo WoRld!";
	str9 = "z";


	printf("c  : %d\n", strcmp(str1, str2));
	printf("ft : %d\n", ft_strcmp(str1, str2));
	printf("c  : %d\n", strcmp(str3, str4));
	printf("ft : %d\n", ft_strcmp(str3, str4));
	printf("c  : %d\n", strcmp(str4, str5));
	printf("ft : %d\n", ft_strcmp(str4, str5));
	printf("c  : %d\n", strcmp(str4, str9));
	printf("ft : %d\n", ft_strcmp(str4, str9));
	printf("c  : %d\n", strcmp(str4, str5));
	printf("ft : %d\n", ft_strcmp(str4, str5));
	printf("c  : %d\n", strcmp(str6, str7));
	printf("ft : %d\n", ft_strcmp(str6, str7));
	printf("c  : %d\n", strcmp(str6, str8));
	printf("ft : %d\n", ft_strcmp(str6, str8));
}
