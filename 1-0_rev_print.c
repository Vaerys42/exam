
int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
		i++;
	if (i != 0)
		i--;
	return (i);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		rev(char *str)
{
	int		i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}

int			main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return ;
	}
	rev(av[1]);
	return (0);
}