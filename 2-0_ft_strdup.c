
#include <stdlib.h>

int				ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char			*ft_strdup(char *str)
{
	char		*new;
	int			i;

	if (!(new = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = 0;
	return (new);
}