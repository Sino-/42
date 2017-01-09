/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:11:46 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/19 16:32:51 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MALLOC_CHECK if (!trimmed_string) return (0)

static char	*trimhelper(char const *s, size_t tail, size_t head, size_t len)
{
	char	*trimmed_string;

	head = 0;
	len = ft_strlen(s);
	tail = len - 1;
	while (ft_iswhitespace(s[tail]) || ft_iswhitespace(s[head]))
	{
		if (ft_iswhitespace(s[head]))
			head++;
		if (ft_iswhitespace(s[tail]))
			tail--;
	}
	if (!s[head])
		return (ft_strdup(""));
	trimmed_string = (char *)malloc((sizeof(char) * (tail - head + 2)));
	MALLOC_CHECK;
	trimmed_string[(tail - head-- + 1)] = '\0';
	len = 0;
	while (++head <= tail)
		trimmed_string[len++] = s[head];
	return (trimmed_string);
}

char		*ft_strtrim(char const *s)
{
	if (s)
		return (trimhelper(s, 0, 0, 0));
	return (0);
}
