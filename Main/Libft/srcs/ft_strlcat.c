/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 23:30:10 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/19 17:52:53 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	size_t	curr1;
	size_t	curr2;
	size_t	total;

	curr1 = 0;
	curr2 = 0;
	while (dst[curr1] && curr1 < size)
		curr1++;
	total = curr1;
	if (total == size)
		return (total + ft_strlen(src));
	while (curr1 < (size - 1) && src[curr2])
	{
		dst[curr1] = src[curr2];
		curr1++;
		curr2++;
	}
	if (curr1 < size)
		dst[curr1] = '\0';
	return (total + ft_strlen(src));
}
