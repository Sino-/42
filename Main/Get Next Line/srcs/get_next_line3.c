#include "get_next_line.h"
#include "libft.h"


int	leftover_parser(const int fd, char **line, char **leftovers)
{
	char	*tmp;

	tmp = ft_strjoin(leftovers[fd], buffer);
	free(leftovers[fd]);
	leftovers[fd] = tmp;
	return (1);
}




int get_next_line(const int fd, char **line)
{
	static char **leftovers;
	int         split_pt;
	int         bytes_read;
	char        *tmp;
	char        buffer[BUFF_SIZE + 1];
	int			return_val;

	if (!leftovers)
		leftovers = (char **)malloc(sizeof(char *) * (MAX_FD + 1));
	split_pt = 0;
	while((bytes_read = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		if (leftovers[fd])
			return_val = leftover_parser(fd, line, leftovers);	
		else
			leftovers[fd] = ft_strdup(buffer);
		while (leftovers[fd][split_pt] != 0 && leftovers[fd][split_pt] != 10)
			split_pt++;
		if (leftovers[fd][split_pt] == 10)
		{	
			return_val = leftover_parser(fd, line, leftovers);
			*line = ft_strsub(leftovers[fd], 0, split_pt);
			tmp = ft_strsub(leftovers[fd], (split_pt + 1), ft_strlen(leftovers[fd]) - split_pt);
			free(leftovers[fd]);
			leftovers[fd] = tmp;
			return (return_val);
		}
	}
	if (bytes_read < 0)
		return (-1);
	if (leftovers[fd][split_pt] == 0 && split_pt > 0) {
		*line = ft_strsub(leftovers[fd], 0, split_pt);
		return (1);
	}
	return (split_pt > 0);
}
