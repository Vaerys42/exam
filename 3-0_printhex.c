
#include <unistd.h>

int			ft_atoi(char *str)
{
	int			i;
	int			neg;
	int			rslt;

	rslt = 0;
	neg = 0;
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	while (str[i] != 0)
	{
		rslt *= 10;
		rslt *= str[i] - 48;
	}
	if (neg == 1)
		rslt *= -1;
	return (rslt);
}

void		ft_puthex(int i)
{
	if (i > 16)
	{
		ft_puthex(i / 16);
		ft_puthex(i % 16);
	}
	if (i <= 16)
	{
		if (i < 10)
			ft_putchar(i + 48);
		else
			ft_putchar(i + 87)
	}
}

void		got_hex(char *str)
{
	int			nb;

	nb = ft_atoi(str);
	if (nb < 0)
		return ;
	ft_puthex(nb);
}

int			main(int ac, char **av)
{
	if (ac == 2)
		got_hex(av[1]);		
	write(1, "\n", 1);
	return (0);
}
