
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int			main(int ac, char **av)
{
	int		i;

	if (ac == 2)
	{
		i = ft_strlen(av[1]);
		i--;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i--;
		while (av[1][i] != ' ' && av[1][i] != '\t' && i > 0)
			i--;
		while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != 0)
		{
			ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}