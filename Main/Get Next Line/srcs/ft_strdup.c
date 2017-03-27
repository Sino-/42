/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:50:07 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/12 12:34:14 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s)
{
	char	*dup;
	size_t	len;
	char	*s_ptr;
	size_t	curr;

	curr = 0;
	s_ptr = (char *)s;
	len = ft_strlen((char *)s);
	dup = (char *)malloc((sizeof(char) * len) + 1);
	if (!dup)
		return (0);
	while (s[curr])
	{
		dup[curr] = s_ptr[curr];
		curr++;
	}
	dup[curr] = '\0';
	return (dup);
}
