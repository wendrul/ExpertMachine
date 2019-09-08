#include <fcntl.h>
#include "error.h"

int	get_file_size(int fd)
{
	int size;
	int bytes_read;
	char buf[4097];

	size = 0;
	while ((bytes_read = read(fd, buf, 4096)))
		if (bytes_read <= 0)
			return (-1);	
		else
			size += bytes_read;
}

int	read_file(char *path)
{
	int fd;
	int size;	

	if ((fd = open(path, O_RDONLY)) == -1 ||
		 (size = get_file_size(fd)) == -1)
		return (open_error());
	close(fd);
	fd = open(path, O_RDONLY);
	
	
}

int	parse(char *path)
{
	char **data;
	
	
}
