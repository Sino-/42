/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:05:18 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/20 10:57:54 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CAST unsigned char const

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t	curr;
	int		return_val;

	curr = 0;
	return_val = 0;
	if (n == 0)
		return (0);
	while (s1[curr] && curr + 1 < n)
	{
		if ((CAST)s2[curr] != (CAST)s1[curr])
			return ((CAST)s1[curr] - (CAST)s2[curr]);
		curr++;
	}
	return ((CAST)s1[curr] - (CAST)s2[curr]);
}
