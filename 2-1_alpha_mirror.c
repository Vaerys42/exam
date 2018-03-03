
#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

char			letter(char c)
{
	int		diff;

	if (c >= 65 && c <= 77)
	{
		diff = c - 65;
		c = 90 - diff;
	}
	else if (c >= 78 && c <= 90)
	{
		diff = c - 78;
		c = 65 + diff;
	}
	else if (c >= 97 && c <= 109)
	{
		diff = c - 97;
		c = 122 - diff;
	}
	else if (c >= 110 && c <= 122)
	{
		diff = c - 110;
		c = 97 + diff;
	}
	return (c);
}

int				main(int ac, char **av)
{
	int			i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] != 0)
		{
			ft_putchar(letter(av[1][i]));
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}