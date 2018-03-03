
int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void		end(void)
{
	write(1, "\n", 1);
	exit(0);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			main(int ac, char **av)
{
	int			i;

	if (ac != 4)
		end();
	if (ft_strlen(av[2]) != 1 || ft_strlen(av[3]) != 1)
		end();
	i = 0;
	while (av[1][i] != 0)
	{
		if (av[1][i] == av[2][0])
			av[1][i] = av[3][0];
		i++;
	}
	ft_putstr(av[1]);
	return (0);
}