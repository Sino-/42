/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:15:18 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/10 13:32:53 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, void const *str2, size_t n)
{
	size_t	curr;
	char	*str1_ptr;
	char	*str2_ptr;

	str1_ptr = (char *)str1;
	str2_ptr = (char *)str2;
	curr = 0;
	while (curr < n)
	{
		str1_ptr[curr] = str2_ptr[curr];
		curr++;
	}
	return (str1);
}
