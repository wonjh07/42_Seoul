#include <stdlib.h>

int	ft_len_sum(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	c;
	int	sep_c;

	sep_c = 0;
	while (sep[sep_c] != '\0')
		sep_c++;
	c = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			c++;
		}
		i++;
	}
	if (size > 0)
		c = c + (sep_c * (i - 1));
	return (c);
}

int	ft_strcpy(char *dest, char *src, int i)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[i + c] = src[c];
		c++;
	}
	return (c);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_len;
	int		i;
	int		j;
	char	*full_words;

	full_len = ft_len_sum(size, strs, sep);
	full_words = (char *) malloc(sizeof(char) * (full_len + 1));
	i = 0;
	j = 0;
	while (j < size)
	{
		i += ft_strcpy(full_words, strs[j], i);
		if (j < (size - 1))
			i += ft_strcpy(full_words, sep, i);
		j++;
	}
	full_words[i] = '\0';
	return (full_words);
}
