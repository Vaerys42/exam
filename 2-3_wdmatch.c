
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int			i;

	i = 0;
	while(str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			main(int ac, char **av)
{
	int			i;
	int			j;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (av[2][j] != 0)
		{
			if (av[2][j] == av[1][j])
				i++;
			j++;
		}
		if (av[1][j - 1] == 0)
			ft_putstr(av[1]);
	}
	ft_putchar('\n');
	return (0);
}