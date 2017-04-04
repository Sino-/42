#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/11 00:18:13 by yolabi            #+#    #+#              #
#    Updated: 2017/03/17 02:42:40 by yolabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	get_next_line
OUTFILE	=	-o get_next_line
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -fsanitize=address
INCS	=	-I./includes/
SRCDIR	=	./srcs/
LIST	=	get_next_line ft_strdup ft_strjoin ft_strlen ft_strnew ft_strsub ft_itoa ft_putchar ft_numofbits
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
