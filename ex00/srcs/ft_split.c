#include <stdlib.h>

int	is_space(char c)
{
	return(c == ' ' || c == '\n' || c == '\t');
}

int		word_count(char *str)
{
	int words;
	int i;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!is_space(str[i]))
		{
			while(str[i] && !is_space(str[i]))
				i++;
			words++;
			if (!str[i])
				return (words);
		}
		i++;
	}
	return (words);
}

int		word_length(char *str)
{
	int i = 0;

	while (str[i] && !is_space(str[i]))
		i++;
	return (i);
}

char **ft_split(char *str)
{
	int i = 0;
	int j;
	int word = 0;
	char **splut;

	if(!(splut = (char**)malloc(sizeof(char*) * (word_count(str) + 1))))
		return (NULL);
	while (str[i] && word < word_count(str))
	{
		if (!is_space(str[i]))
		{
			if(!(splut[word] = (char*)malloc(sizeof(char) * (word_length(str + i) + 1))))
				return (NULL);
			j = 0;
			while(str[i] && !is_space(str[i]))
			{
				splut[word][j] = str[i];
				i++;
				j++;
			}
			splut[word][j] = '\0';
			splut[word + 1] = NULL;
			word++;
			if (!str[i])
				return (splut);
		}
		i++;
	}
	splut[word] = NULL;
	return (splut);
}
