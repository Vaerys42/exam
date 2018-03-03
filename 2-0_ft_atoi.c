
int				ft_atoi(char *c)
{
	int			i;
	int			result;
	int			neg;

	i = 0;
	result = 0;
	neg = 0;
	while (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' || c[i] == '\f' || c[i] == '\v' || c[i] == '\r')
		i++;
	if (c[i] == '-')
	{
		i++;
		neg = 1;
	}
	while (c[i] >= 48 && c[i] <= 57)
	{
		result *= 10;
		result += c[i] - 48;
	}
	if (neg == 1)
		result *= -1;
	return (result);
}