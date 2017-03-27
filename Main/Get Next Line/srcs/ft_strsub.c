/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:35:49 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/20 04:54:56 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *substring;

	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (0);
	if (s)
	{
		substring[len] = '\0';
		if (ft_strlen(s) == 0)
			return (substring);
		while (--len + 1 > 0)
			substring[len] = s[start + len];
	}
	return (substring);
}
