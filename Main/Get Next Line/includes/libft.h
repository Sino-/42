/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 12:28:24 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/20 04:57:38 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef __LIBFT_H
#		define __LIBFT_H
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

char				*ft_strdup(char const *s);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlen(char const *str);
char				*ft_strnew(size_t size);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
#	endif
