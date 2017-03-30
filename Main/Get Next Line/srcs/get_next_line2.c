#include "get_next_line.h"
#include "libft.h"

int	leftover_parser(int fd, char **line, char **leftovers)
{
	int		return_val;
	int		split_pt;
	char	*tmp;

	return_val = 0;
	split_pt = 0;
	while (leftovers[fd][split_pt] != 0 && leftovers[fd][split_pt] != 10)
		split_pt++;
	if (leftovers[fd][split_pt] == 10 || leftovers[fd][split_pt] == 0)
	{
		return_val = (leftovers[fd][split_pt] == 10) ? 1 : 0; 
		*line = ft_strsub(leftovers[fd], 0, split_pt);
		tmp = ft_strsub(leftovers[fd], (split_pt + 1), ft_strlen(leftovers[fd]) - split_pt);
		free(leftovers[fd]);
		leftovers[fd] = tmp;
	}
/*
	if (leftovers[fd][split_pt] == 0 && split_pt > 0)
	{
		*line = ft_strsub(leftovers[fd], 0, split_pt);
		return (1);
	}
*/

	return (return_val);
}



int get_next_line(const int fd, char **line)
{
	static char **leftovers;
	int         bytes_read;
	char        *tmp;
	int			return_val;
	char        buffer[BUFF_SIZE + 1];

	if (!leftovers)
		leftovers = (char **)malloc(sizeof(char *) * (MAX_FD + 1));
	while((bytes_read = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		if (leftovers[fd])
		{
			tmp = ft_strjoin(leftovers[fd], buffer);
			free(leftovers[fd]);
			leftovers[fd] = tmp;
		}
		else
			leftovers[fd] = ft_strdup(buffer);

		return_val = leftover_parser(fd, line, leftovers);
		return (return_val);
	}

	if (bytes_read < 0)
		return (-1);

	return (0);
}
