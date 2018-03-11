
#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_arg(char *str)
{
	int		i;

	i = 0;
	while (str[i] !=0)
	{
		while((str[i] == ' ' || str[i] == '\t') && str[i] != 0)
		{
			ft_putchar(str[i]);
			i++;
		}
		if (str[i] >= 97 && str[i] <= 122)
			ft_putchar(str[i] - 32);
		i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != 0)
		{
			if (str[i] >= 65 && str[i] <= 90)
				ft_putchar(str[i] + 32);
			else
				ft_putchar(str[i]);
			i++;
		}
	}
}

int				main(int ac, char **av)
{
	int			i;

	i = 1;
	while (i < ac)
	{
		ft_arg(av[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}