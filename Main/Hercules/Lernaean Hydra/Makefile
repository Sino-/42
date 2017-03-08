# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/18 18:13:56 by yolabi            #+#    #+#              #
#    Updated: 2017/02/18 18:22:49 by yolabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_server
OUTFILE		=	-o ft_server
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -Wno-deprecated-declarations
SRCS		=	ft_server.c echoline.c

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) $(OUTFILE)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	
re:	fclean all
