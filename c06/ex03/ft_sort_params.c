#include <unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

void	ft_swap(char **a, char **b)
{
	char	*aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (result == 0 && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		result = s1[i] - s2[i];
		i++;
	}
	if (result == 0 && ((s1[i] == '\0') || (s2[i] == '\0')))
		result = s1[i] - s2[i];
	return (result);
}

int	ft_sort_int_tab(char **str, int i, int j)
{
	int	result;

	result = ft_strcmp(str[i], str[j]);
	if (result > 0)
		ft_swap(&str[i], &str[j]);
	return (0);
}

int	main(int ac, char **str)
{
	int	i;
	int	j;

	if (ac <= 1)
		return (0);
	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			ft_sort_int_tab(str, i, j);
			j++;
		}
		write(1, str[i], ft_strlen(str[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
