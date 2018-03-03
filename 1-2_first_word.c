
#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			first(char *str)
{
	int			i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != 0)
		ft_putchar(str[i]);
}

int				main(int ac, char **av)
{
	if (ac == 2)
		first(av[1]);
	ft_putchar("\n");
	return (0);
}