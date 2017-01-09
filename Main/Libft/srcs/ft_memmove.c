/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:10:53 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/17 22:23:36 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t n)
{
	size_t	curr;

	curr = n;
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
		while (--curr + 1)
			((unsigned char *)dst)[curr] = ((unsigned char *)src)[curr];
	return (dst);
}
