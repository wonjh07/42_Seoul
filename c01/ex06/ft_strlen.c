#include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

int	main(void)
{
	char	str[];
	int		count;

	str[] = "Amanda";
	count = ft_strlen(str);
	printf("%d\n", count);
}
