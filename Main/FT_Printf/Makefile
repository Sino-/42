# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yolabi <yolabi@42.us.org>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/06 01:44:44 by yolabi            #+#    #+#              #
#    Updated: 2017/04/06 15:22:51 by yolabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
CC		=	gcc 
CFLAGS	=	-c -Wall -Wextra -Werror
SRCDIR	=	srcs/
INCS	=	-I./includes/
LIST	=	ft_printf
SRCS	=	$(addsuffix .c,$(addprefix $(SRCDIR),$(LIST)))
OBJS	=	$(addsuffix .o,$(LIST))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) $(SRCS) $(INCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f test

re: fclean all
