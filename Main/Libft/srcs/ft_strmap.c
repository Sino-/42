/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 18:01:47 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/15 14:01:12 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			newstr[curr] = f((char)s[curr]);
		newstr[curr] = '\0';
		return (newstr);
	}
	return (0);
}
