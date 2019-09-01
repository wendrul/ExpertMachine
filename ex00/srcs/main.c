#include <unistd.h>
#include "main.h"

int	main(int argc, char **argv)
{
	if(argc == 2)
		write(1, argv[1], 10);
	return (0);
}
