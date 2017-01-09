/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:28:18 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/12 13:49:43 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*dst_ptr;
	char	*src_ptr;

	dst_ptr = (char *)dst;
	src_ptr = (char *)src;
	while (n)
	{
		*dst_ptr = *src_ptr;
		dst_ptr++;
		if (*src_ptr == c)
			return (dst_ptr);
		src_ptr++;
		n--;
	}
	return (0);
}
