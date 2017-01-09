/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:36:45 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/07 15:14:20 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	curr;
	char	*str_ptr;

	str_ptr = str;
	curr = 0;
	while (curr < n)
	{
		str_ptr[curr] = c;
		curr++;
	}
	return (str);
}
