/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 10:50:49 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/12 20:09:16 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	size_t			curr;
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	curr = 0;
	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (curr < n)
	{
		if (s1_ptr[curr] - s2_ptr[curr])
			return (s1_ptr[curr] - s2_ptr[curr]);
		curr++;
	}
	return (0);
}
