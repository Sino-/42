/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:11:54 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/07 11:41:27 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	curr;
	char	*s_ptr;

	s_ptr = s;
	curr = 0;
	while (curr < n)
	{
		s_ptr[curr] = '\0';
		curr++;
	}
}
