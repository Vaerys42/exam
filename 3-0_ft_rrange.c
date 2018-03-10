
#include <stdlib.h>

int			*ft_rrange(int start, int end)
{
	int			size;
	int			*tab;
	int			i;

	i = 0;
	size = end - start + 1;
	if (!(tab = (int*)malloc(sizeof(int) * size)))
		return (NULL);
	if (end >= start)
	{
		while (end >= start)
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while (end <= start)
		{
			tab[i] = end;
			end++;
			i++;
		}
	}
	return(tab);
}
