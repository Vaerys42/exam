
#include <stdio.h>

int				make_op(char *op, int a, int b)
{
	if (op[0] == '+')
		return (a + b);
	if (op[0] == '-')
		return (a - b);
	if (op[0] == '*')
		return (a * b);
	if (op[0] == '/')
		return (a / b);
	if (op[0] == '%')
		return (a % b);
	return (0);
}

int				main(int ac, char **av)
{
	int			rs;
	if (ac != 4)
	{
		rs = make_op(av[2], atoi(av[1]), atoi(av[3]));
		printf("%d", rs);
	}
	printf("\n");
	return (0);
}