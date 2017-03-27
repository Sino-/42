#include "get_next_line.h"
#include "libft.h"

int	get_next_line(const int fd, char **line)
{
	static char	**leftovers;
	int			split_pt;
	int 		bytes_read;
	char		*temp_leftovers;
	char		buffer[BUFF_SIZE + 1];

	split_pt = -1;
	if (!leftovers)
	{
		leftovers = (char **)malloc(sizeof(char *) * (MAX_FD + 1));
		if (!leftovers)
			return (1);
		leftovers[split_pt] = NULL;
	}

	split_pt = 0;
	while((bytes_read = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		if (leftovers[fd])
		{
			temp_leftovers = ft_strjoin(leftovers[fd], buffer);
			free(leftovers[fd]);
			leftovers[fd] = temp_leftovers;
		}
		else
			leftovers[fd] = ft_strdup(buffer);
		while (leftovers[fd][split_pt] != 0 && leftovers[fd][split_pt] != 10)
			split_pt++;
		if (leftovers[fd][split_pt] == 10)
		{
			*line = ft_strsub(leftovers[fd], 0, split_pt);
			temp_leftovers = ft_strsub(leftovers[fd], (split_pt + 1), ft_strlen(leftovers[fd]) - split_pt);
			free(leftovers[fd]);
			leftovers[fd] = temp_leftovers;
			return (1);
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