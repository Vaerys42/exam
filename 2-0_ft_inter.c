
#include <unistd.h>

void		ft_putchar(char c)
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

int			main(int ac, char **av)
{
	int			i;
	int			j;

	if (ac == 3)
	{
		i = 0;
		while (av[1][i] != 0)
		{
			j = 0;
			while (av[2][j] != av[1][i] || av[2][j] != 0)
				j++;
			if (av[2][j] == av[1][i])
			{
				if (before(av[1], i, av[1][i]) == 1)
					ft_putchar(av[1][i]);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (1);
}