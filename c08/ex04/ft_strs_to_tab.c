#include <stdlib.h>
#include "ft_stock_str.h"

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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*gujoche;

	gujoche = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (gujoche == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		gujoche[i].size = ft_strlen(av[i]);
		gujoche[i].str = av[i];
		gujoche[i].copy = ft_strdup(av[i]);
		i++;
	}
	gujoche[i].size = 0;
	gujoche[i].str = 0;
	gujoche[i].copy = 0;
	return (gujoche);
}
