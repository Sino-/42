#include "get_next_line.h"
#include "libft.h"
/*
int echolines(char *str1, char *str2, char *str3, char *str4)
{
	int curr;

	curr = -1;
	while (str1[++curr])
		ft_putchar(str1[curr]);
	curr = -1;
	while (str2[++curr])
		ft_putchar(str2[curr]);
	curr = -1;
	while (str3[++curr])
		ft_putchar(str3[curr]);
	curr = -1;
	while (str4[++curr])
		ft_putchar(str4[curr]);
	return (0);
}


int echoline(char *str)
{
	int curr;

	curr = -1;
	while (str[++curr])
		ft_putchar(str[curr]);
	return (0);
}
*/
void	concat_buff_and_leftovers(const int fd, char *buffer, char **leftovers)
{
	char	*tmp;

	if (!leftovers[fd])
		tmp = ft_strdup(buffer);
	else
		tmp = ft_strjoin(leftovers[fd], buffer);
	free(leftovers[fd]);
	leftovers[fd] = tmp;
}

int		setline_resize(const int fd, char **line, char **leftovers, int splt)	
{
	char	*tmp;

	*line = ft_strsub(leftovers[fd], 0, splt);
	tmp = ft_strsub(leftovers[fd], (splt + 1), ft_strlen(leftovers[fd]) - splt);
	free(leftovers[fd]);
	leftovers[fd] = tmp;
	return (1);
}

int get_next_line(const int fd, char **line)
{
	static char **leftovers;
	int         split_pt;
	int         bytes_read;
	char        buffer[BUFF_SIZE + 1];

	if (!leftovers)
		leftovers = (char **)malloc(sizeof(char *) * (MAX_FD + 1));
	split_pt = 0;
	while((bytes_read = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		if (leftovers[fd])
			concat_buff_and_leftovers(fd, buffer, leftovers);	
		else
			leftovers[fd] = ft_strdup(buffer);
		while (leftovers[fd][split_pt] != 0 && leftovers[fd][split_pt] != 10)
			split_pt++;
		if (leftovers[fd][split_pt] == 10)
			return (setline_resize(fd, line, leftovers, split_pt));
	}
	if (bytes_read < 0)
		return (-1);
	while (leftovers[fd][split_pt] != 0)
		split_pt++;
	if (leftovers[fd][split_pt] == 0 && split_pt > 0)
	{
		*line = ft_strsub(leftovers[fd], 0, split_pt - 1);
		leftovers[fd][0] = 0;
		return (1);
	}
	return (0);
}
/*
int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		res;

	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (2);
	while ((res = get_next_line(fd, &line)) == 1)
	{
		echolines("res =|", ft_itoa(res),"|","\n");
		echolines("line is=|", line, "|", "\n");
	}
	if (argc == 2)
		close(fd);
	return (0);
}*/

