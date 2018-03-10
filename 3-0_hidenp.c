
#include <unistd.h>

void		ft_str_check(char *s1, char *s2)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (s2[j] != 0)
	{
		if (s2[j] == s1[i])
			i++;
		j++;
	}
	if (s1[i] == 0)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int			main(int ac, char **av)
{
	if (ac == 3)
		ft_str_check(av[1], av[2]);	
	write(1, "\n", 1);
	return (0);
}
