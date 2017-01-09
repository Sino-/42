/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 19:54:25 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/19 22:35:03 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MALLOC_CHECK if (!trimmed_string) return (0)

static char	*ft_strtrimcharhelper(char const *s, char c, size_t t, size_t h)
{
	char	*trimmed_string;
	size_t	len;

	h = 0;
	len = ft_strlen(s);
	t = len - 1;
	while (s[t] == c || s[h] == c)
	{
		if (s[h] == c)
			h++;
		if (s[t] == c)
			t--;
	}
	if (!s[h])
		return (ft_strdup(""));
	trimmed_string = (char *)malloc((sizeof(char) * (t - h + 2)));
	MALLOC_CHECK;
	trimmed_string[(t - h-- + 1)] = '\0';
	len = 0;
	while (++h <= t)
		trimmed_string[len++] = s[h];
	return (trimmed_string);
}

char		*ft_strtrimchar(char const *s, char c)
{
	if (s)
		return (ft_strtrimcharhelper(s, c, 0, 0));
	return (0);
}
