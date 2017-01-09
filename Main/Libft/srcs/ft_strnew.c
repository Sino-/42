/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:44:49 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/12 22:37:05 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	curr;

	curr = 0;
	str = (char *)malloc((sizeof(char) * size) + 1);
	if (!str)
		return (0);
	while (curr < size)
	{
		str[curr] = '\0';
		curr++;
	}
	str[curr] = '\0';
	return (str);
}
