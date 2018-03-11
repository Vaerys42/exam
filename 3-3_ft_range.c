
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
	if(start <= end)
	{
		while (start <= end)
		{
			tab[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while(start >= end)
		{
			tab[i] = start;
			i++;
			start--;
		}
	}
	return(tab);
}
