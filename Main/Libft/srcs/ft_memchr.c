/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:43:03 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/20 04:53:43 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	size_t			curr;

	curr = 0;
	while (curr < n)
	{
		if (((unsigned char *)s)[curr] == (unsigned char)c)
			return (&((unsigned char *)s)[curr]);
		curr++;
	}
	return (0);
}
