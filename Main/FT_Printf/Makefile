# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yolabi <yolabi@42.us.org>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/06 01:44:44 by yolabi            #+#    #+#              #
#    Updated: 2017/07/02 23:23:34 by yolabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	test.printf
OUTFILE =   -o $(NAME)
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
SRCDIR	=	srcs/
INCS	=	-I./includes/
LIST	=	ft_printf
SRCS	=	$(addsuffix .c,$(addprefix $(SRCDIR),$(LIST)))
OBJS	=	$(addsuffix .o,$(LIST))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) $(SRCS) $(INCS) $(OUTFILE)
clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f test

re: fclean all
