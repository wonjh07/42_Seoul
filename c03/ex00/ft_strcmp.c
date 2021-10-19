int	ft_strcmp(char *s1, char *s2)
{
	int	c;
	int	result;

	c = 0;
	result = 0;
	while (result == 0 && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		result = s1[c] - s2[c];
		c++;
	}
	if (result == 0 && ((s1[c] == '\0') || (s2[c] == '\0')))
		result = s1[c] - s2[c];
	return (result);
}
