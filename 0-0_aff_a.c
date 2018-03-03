
#include <unistd.h>

int		write_a(void)
{
	write(1, "a", 1);
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	
	if (argv != 2)
		return (write_a());
	i = 0;
	while (argv[1][i] != 0)
	{
		if (argv[1][i] == 'a')
			return (write_a());
		i++;
	}
	write(1, "\n", 1);
	return (0);
}