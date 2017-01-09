/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:10:19 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/15 16:13:34 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	curr;
	char	*newstr;

	if (s)
	{
		newstr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!newstr)
			return (0);
		curr = -1;
		while (s[++curr])
			newstr[curr] = f(curr, (char)s[curr]);
		newstr[curr] = '\0';
		return (newstr);
	}
	return (0);
}
