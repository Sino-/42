/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numofbits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:25:51 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/15 17:39:28 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numofbits(intmax_t val)
{
	size_t	bits;

	bits = 1;
	if (val < 0)
		bits++;
	if (val < 0)
		val = -val;
	while ((val / 10) > 0)
	{
		val /= 10;
		bits++;
		if (val == 1)
			break ;
	}
	return (bits);
}
