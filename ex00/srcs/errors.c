#include <unistd.h>
#include "errors.h"

void	ft_puterror(char *msg)
{
	int len;

	len = 0;
	while (msg[len])
		len++;
	write(2, msg, len);
}

int	syntax_error()
{
	ft_puterror("Syntax Error.\n");
	return (0);
}

int	logic_error()
{
	
	ft_puterror("Logical Contradiction.\n");
	return (0);
}

int	file_error()
{
	ft_puterror("Can't openn file.\n");
	return (0);
}
