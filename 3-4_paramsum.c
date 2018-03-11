
#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putnbr(int i)
{
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_puchar(i + 48);
}

int				main(int ac, char **av)
{
	ft_putnbr(ac - 1);
	ft_putchar('\n');
	return (0);
}