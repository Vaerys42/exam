
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int			i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

char		rotate(char c)
{
	if (c >= 65 && c <= 90)
	{
		c += 13;
		if (c > 90)
			c -= 26;
		return (c);
	}
	if (c >= 97 && c <= 122)
	{
		c += 13;
		if (c > 122)
			c -= 26;
		return (c);
	}
	return (c);
}

int			main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != 0)
		{
			av[1][i] = rotate(av[1][i]);
			i++;
		}
		ft_putstr(av[1]);
	}
	ft_putchar("\n");
	return (0);
}