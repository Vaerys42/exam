
#include <unistd.h>

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

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i] != 0)
	{
		if (av[1][i] >= 65 && av[1][i] <= 90)
			av[1][i] += 34;
		else if (av[1][i] >= 97 && av[1][i] <= 122)
			av[1][i] -= 34;
		i++;
	}
	ft_putstr(av[1]);
	return (0);
}