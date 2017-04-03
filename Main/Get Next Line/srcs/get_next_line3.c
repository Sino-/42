#include "get_next_line.h"
#include "libft.h"


int get_next_line(const int fd, char **line)
{
	static char **leftovers;
	char        buffer[BUFF_SIZE + 1];
	int         bytes_read;	
	int         split_pt;	
	char        *tmp;

	if (!leftovers)
		leftovers = (char **)malloc(sizeof(char *) * (MAX_FD + 1));
	bytes_read = read(fd, buffer, BUFF_SIZE);
	if (bytes_read < 0)
		return (-1);
	buffer[bytes_read] = '\0';
	split_pt = 0;
	if (leftovers[fd])
	{
		tmp = ft_strjoin(leftovers[fd], buffer);
		free(leftovers[fd]);
		leftovers[fd] = tmp;
	}
	else
		leftovers[fd] = ft_strdup(buffer);

	while (leftovers[fd][split_pt] != 0 && leftovers[fd][split_pt] != 10)
		split_pt++;
	if (leftovers[fd][split_pt] == 10)
	{
		*line = ft_strsub(leftovers[fd], 0, split_pt);
		tmp = ft_strsub(leftovers[fd], (split_pt + 1), ft_strlen(leftovers[fd]) - split_pt);
		free(leftovers[fd]);
		leftovers[fd] = tmp;
		return (1);
	}
	else if (leftovers[fd][split_pt] == 0 && bytes_read > 0)
		get_next_line(fd, line);
	if (leftovers[fd][split_pt] == 0 && split_pt > 0) 
	{
		*line = ft_strsub(leftovers[fd], 0, split_pt);
		return (1);
	}
	return (0);
}
