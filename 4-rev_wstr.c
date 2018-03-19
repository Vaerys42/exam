
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

int				ft_count_words(char *str)
{
	int			i;
	int			words;

	i = 0;
	words = 0;
	while (str[i] != 0)
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i] != 0)
			i++;
		while(str[i] != ' ' && str[i] != '\t' && str[i] != 0)
			i++;
		if (str[i - 1] != ' ' && str[i - 1] != '\t')
			words++;
	}
	return (words);
}

char			*get_word(char *str, int start)
{
	int			j;
	char		*word;

	j = 0;
	while ((str[start] == ' ' || str[start] == '\t') && str[start] != 0)
		start++;
	while((str[start + j] != ' ' || str[start + j] == '\t') && str[start + j] != 0)
		j++;
	if (j == 0)
		return (NULL);
	if (!(word = (char*)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	j = 0;
	while ((str[start + j] != ' ' || str[start + j] == '\t') && str[start + j] != 0)
	{
		word[j] = str[start + j];
		j++;
	}
	word[j] = 0;
	return (word);
}

void			ft_putstr(char *str)
{
	int			i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

char			**ft_strsplit(char *str)
{
	char			**split;
	int				nb;
	int				i;
	int				j;

	nb = ft_count_words(str);
	if (!(split = (char**)malloc(sizeof(char*) * (nb + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != 0)
	{
		split[j] = get_word(str, i);
		j++;
		while ((str[i] == ' ' || str[i] == '\t') && str[i] != 0)
			i++;
		while((str[i] != ' ' || str[i] != '\t') && str[i] != 0)
			i++;
	}
	return (split);
}

void			rev_wstr(char *str)
{
	int			words;
	char		**new;

	words = ft_count_words(str);
	new = ft_strsplit(str);
	words--;
	while(words >= 0)
	{
		ft_putstr(new[words]);
		words--;
	}
}

int				main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	ft_putchar('\n');
	return (0);
}
