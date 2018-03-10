
#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_rem_space(char *str)
{
	int			i;
	while (str[i] != 0)
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i] != 0)
			i++;
		while ((str[i] != ' ' && str[i] != '\t' && str[i] != 0))
		{
			ft_putchar(str[i]);
			i++;
		}
		ft_putchar(' ');
	}
}

int				main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_rem_space(av[1]);
	return (0);
}
