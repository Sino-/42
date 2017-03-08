#include <unistd.h>
int echoline(int fd, char *str)
{
	size_t curr = 0;
	while(str[curr])
		write(fd, &str[curr++], 1);
	return (0);
}
