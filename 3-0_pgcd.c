
#include <stdio.h>
#include <strlib.h>

int			pgcd(int a, int b)
{
	int			pgcd;
	int			i;
	int			low;

	if (a < b)
		low = a;
	else if (a > b)
		low = b;
	else
		return (a);
	i = 1;
	pgcd = 1;
	while (i <= low)
	{
		if (a % i == 0 && b % i == 0)
			pgcd = i;
		i++;
	}
	return (pgcd);
}

int			main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", pgcd(atoi(av[1]), atoi(av[2])));
	printf("\n");
	return (0);
}
