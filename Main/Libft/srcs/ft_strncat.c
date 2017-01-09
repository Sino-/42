/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:02:47 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/20 05:01:13 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char const *s2, size_t n)
{
	size_t	curr1;
	size_t	curr2;

	curr1 = 0;
	curr2 = 0;
	while (s1[curr1])
		curr1++;
	while (s2[curr2] && curr2 < n)
		s1[curr1++] = s2[curr2++];
	s1[curr1] = '\0';
	return (s1);
}
