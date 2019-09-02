#include <stdlib.h>

int	is_white(char c)
{
	return (c == ' ' || c == '\f' ||
		c == '\n' || c == '\r' ||
		c == '\v' || c == '\t');
}

int	count_chars(char *str)
{
	int i;
	int count;

	i = -1;
	count = 0;
	while (str[++i])
		count += !is_white(str[i]);
	return (count);
}

int	ft_remove_whitespace(char **str)
{
	char *new;
	int i;
	int j;

	if (!(new = (char*)malloc(sizeof(char) * (1 + count_chars(*str)))))
		return (0);
	i = 0;
	j = 0;
	while ((*str)[i])
	{
		if (!is_white((*str)[i]))
		{
			new[j] = (*str)[i];
			j++;
		}
	i++;
	}
	new [j] = '\0';
	free(*str);
	*str = new;
	return (1);
}
