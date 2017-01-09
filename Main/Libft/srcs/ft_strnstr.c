/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:20:19 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/20 10:57:10 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	curr;
	size_t	litlen;

	curr = 0;
	if (!(*lit))
		return ((char *)big);
	litlen = ft_strlen(lit);
	if (!*big || len < litlen)
		return (0);
	if (*big == *lit && !ft_strncmp(big, lit, litlen))
		return ((char*)big);
	return (ft_strnstr(++big, lit, len - 1));
}
