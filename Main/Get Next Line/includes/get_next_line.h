#ifndef	GET_NEXT_LINE_H
#	define GET_NEXT_LINE_H

#define BUFF_SIZE	1
#define MAX_FD		4096

#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

int get_next_line(const int fd, char **line);

#   endif
