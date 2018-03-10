
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
	if (i < 10)
		ft_putchar(i + 48);
}

void			ft_putstr(char *str)
{
	int		i;

	i = 0;
	while(str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void			ft_putline(int i, int coeff)
{
	ft_putnbr(coeff);
	ft_putstr(" x ");
	ft_putnbr(i);
	ft_putstr(" = ");
	ft_putnbr(i * coeff);
	ft_puchar('\n');
}

void			ft_table(int i)
{
	int		coeff;

	coeff = 1;
	while (coeff < 10)
	{
		ft_putline(i, coeff);
		coeff++;
	}
}

int				ft_atoi(char *str)
{
	int			rslt;
	int			i;

	i = 0;
	rslt= 0;
	while(str[i] != 0)
	{
		rslt *= 10;
		rslt += str[i] - 48;
	}
	return (rslt);
}

int				main(int ac, char **av)
{
	if (ac == 2)
		ft_table(ft_atoi(av[1]));
	else
		ft_putchar('\n');
	return (0);
}
