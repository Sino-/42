/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:08:35 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/20 10:57:28 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	maxlen;

	if (!s1 || !s2)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	maxlen = ((len1 > len2) == 1) ? len1 : len2;
	if (len1 != len2)
		return (0);
	if (len1 == 0 && len2 == 0)
		return (1);
	while (--maxlen)
		if (s1[maxlen] != s2[maxlen])
			return (0);
	return (1);
}
