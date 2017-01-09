# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yolabi <yolabi@42.us.org>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 13:44:44 by yolabi            #+#    #+#              #
#    Updated: 2017/01/08 15:22:51 by yolabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC		=	gcc 
CFLAGS	=	-c -Wall -Wextra -Werror
SRCDIR	=	srcs/
INCS	=	-I./includes/  
LIST	=	ft_atoi ft_bzero ft_charequ ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_islower ft_isprint ft_isupper ft_iswhitespace ft_itoa ft_lstadd ft_lstdel ft_lstdelone ft_lstiter ft_lstmap ft_lstnew ft_memalloc ft_memccpy ft_memchr ft_memcmp ft_memcpy ft_memdel ft_memmove ft_memset ft_numofbits ft_putchar ft_putchar_fd ft_putendl ft_putendl_fd ft_putnbr ft_putnbr_fd ft_putstr ft_putstr_fd ft_strcat ft_strchr ft_strclr ft_strcmp ft_strcpy ft_strdel ft_strdup ft_strequ ft_striter ft_striteri ft_strjoin ft_strlcat ft_strlen ft_strmap ft_strmapi ft_strncat ft_strncmp ft_strncpy ft_strnequ ft_strnew ft_strnstr ft_strrchr ft_strsplit ft_strstr ft_strsub ft_strtrim ft_strtrimchar ft_tolower ft_toupper
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
