char	*ft_strcapitalize(char *str)
{
	int	c;
	int	first_letter;

	c = 0;
	first_letter = 0;
	while (str[c] != '\0')
	{
		if (first_letter == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 'a' - 'A';
			first_letter++;
		}
		else if (first_letter != 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] += 'a' - 'A';
		else if (!((str[c] >= '0' && str[c] <= '9')
				|| (str[c] >= 'A' && str[c] <= 'Z')
				|| (str[c] >= 'a' && str[c] <= 'z')))
			first_letter = 0;
		else
			first_letter++;
		c++;
	}
	return (str);
}
