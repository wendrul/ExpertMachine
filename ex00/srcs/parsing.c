#include <fcntl.h>
#include "errors.h"

char		**read_lines(int fd)
{
	char	*buf;
	int		ret;
	char	**txt;
	char	*str;

	str = ft_strnew(1);
	while ((ret = get_next_line(fd, &buf)) == 1)
	{
		str = ft_strjoin2(str, buf);
		ft_strdel(&buf);
	}
	if ((txt = ft_strsplit(str, '`')) == NULL || ret == -1)
        return NULL;
	free(str);
	return (txt);
}

int	get_file_size(int fd)
{
	int     size;
	int     bytes_read;
	char    buf[4097];

	size = 0;
	while ((bytes_read = read(fd, buf, 4096)))
    {
		if (bytes_read == -1)
			return (-1);	
		else
			size += bytes_read;
    }
    return (size);
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
