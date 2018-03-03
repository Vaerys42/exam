
#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

int			before(char *str, int place, char c)
{
	int			i;

	i = 0;
	while (i < place)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int				check_char(char *str, char c)
{
	int			i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int				main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac != 3)
	{
		while (av[1][i] != 0)
		{
			if (before(av[1], i, av[1][i]) == 1)
				ft_putchar(av[1][i]);
		}
		i = 0;
		while (av[2][i] != 0)
		{
			if (before(av[2], i, av[2][i]) == 1 && check_char(av[1], av[2][i]) == 1)
				ft_putchar(av[2][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (1);
}