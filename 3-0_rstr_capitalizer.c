
#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putstr(char *str)
{
	int			i;

	i = 0;
	while(str[i] !+ 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void			rstr(char *str)
{
	int			i;

	i = 0;
	while (str[i] !+ 0)
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i] != 0)
			i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != 0)
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
			if (str[i + 1] == 0 || str[i + 1] == ' ' || str[i + 1] == '\t')
			{
				if (str[i] >= 97 && str[i] <= 122)
					str[i] -= 32;
			}
			i++;
		}
	}
}

int				main(int ac, char **av)
{
	int		i;

	i = 1;
	while (i != ac)
	{
		rstr(av[i]);
		ft_putstr(av[i]);
		i++;
	}
	ft_putchar("\n");
	return (0);
}
