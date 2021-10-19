char	*ft_strcat(char *dest, char *src)
{
	int	i;

	while (dest[i] != '\0')
		i++;
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
