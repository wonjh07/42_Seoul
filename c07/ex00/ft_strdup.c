#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		length;

	length = ft_strlen(src);
	dest = malloc(sizeof(char) * (length + 1));
	dest = ft_strcpy(dest, src);
	return (dest);
}
