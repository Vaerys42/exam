
#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putstr(char *str)
{
	int			i;

	i = 0;
	while(str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int				is_word(char *str, int i)
{
	while(str[i] != 0)
	{
		if (str[i] != ' ' && str[i] != '\t')
			return (1);
		i++;
	}
	return (0);
}

void			space_word(char *str)
{
	int			i;

	i = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i] != 0)
	{
		if (str[i] != ' ' && str[i] != '\t')
			ft_putchar(str[i]);
		else
		{
			if (is_word(str, i) == 1)
			{
				ft_putstr("   ");
				while (str[i] == ' ' || str[i] == '\t')
					i++;
			}
			else
				return ;
		}
	}
}

int				main(int ac, char **av)
{
	if (ac == 2)
		space_word(av[1]);
	ft_putchar('\n');
	return (0);
}
