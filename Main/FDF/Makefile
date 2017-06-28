# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/27 17:17:39 by yolabi            #+#    #+#              #
#    Updated: 2017/06/27 17:18:39 by yolabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fdf
OUTFILE	=	-o fdf
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
INCS	=	-I./includes/
SRCDIR	=	./srcs/
LIST	=	fdf 
SRCS	=	$(addsuffix .c,$(addprefix $(SRCDIR), $(LIST)))
OBJS	=	$(addsuffix .o,$(LIST))

.PHONY:	all clean fclean re

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) $(INCS) $(OUTFILE)

clean:
	    /bin/rm -f $(OBJS)

fclean: clean
	    /bin/rm -f $(NAME)

re: fclean all
