
int			ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != 0)
		i++;
}

char		*ft_strrev(char *str)
{
	char	new[ft_strlen(str)];
	int		i;
	int		j;

	i = ft_strlen(str);
	j = 0;
	while (j < (int)ft_strlen(str))
	{
		new[j] = str[i - 1];
		i--;
		j++;
	}
	new[j] = '\0';
	i = 0;
	while (str[i] != 0)
	{
		str[i] = new[i];
		i++;
	}
	return (str);
}