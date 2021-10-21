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
