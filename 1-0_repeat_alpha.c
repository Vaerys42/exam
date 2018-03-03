
void		repeat(char c)
{
	int		i;
	int		max;

	i = 0;
	if (c > 65 && c < 91)
		max = c - 64;
	else if (c > 96 && c < 123)
		max = c - 95;
	while (i < max)
	{
		write(1, &c, 1);
		i++;
	}
}

int 	main(int ac, char **av)
{
	int		i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i] != 0)
	{
		repeat(av[1][i]);
		i++;
	}
	return (0);
}