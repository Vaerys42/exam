
int			max(int *tab, unsigned int len)
{
	int		i;
	int		max;

	i = 0;
	max = 0;
	if (len == 0)
		return (0);
	while (i <= len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}