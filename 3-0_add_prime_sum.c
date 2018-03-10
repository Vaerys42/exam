
#include <unistd.h>

int				ft_atoi(char *str)
{
	int			rslt;
	int			i;

	rslt = 0;
	i = 0;
	while(str[i] != 0)
	{
		rslt *= 10;
		rslt += str[i] - 48;
		i++;
	}
	return (rslt);
}

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putnbr(int i)
{
	if (c < 0)
	{
		ft_putchar('-');
		c *= -1;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	if (i < 10)
		ft_putchar(i + 48);
}

int				is_premier(int i)
{
	int			under;

	under = 2;
	while (under * under < i)
	{
		if (i % under == 0)
			return (0);
		under++;
	}
	return (1);
}

void			fir(char *str)
{
	int			nbr;
	int			i;
	int			rslt;

	i = 0;
	rslt = 0;
	nbr = ft_atoi(str);
	while (i <= nbr)
	{
		if (is_premier(i) == 1)
			rslt += i;
		i++;
	}
}

int				main(int ac, char **av)
{
	if (ac != 2 || av[1][0] == '-' || av[1][0] == '0')
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (av[1][0] == '1')
	{
		write(1, "1\n", 2);
		return (0);
	}
	fir(av[1]);
	return (0);
}
