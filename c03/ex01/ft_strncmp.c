int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	result = 0;
	while ((i < n) && result == 0 && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (i < n && result == 0 && (s1[i] == '\0' || s2[i] == '\0'))
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (result);
}
