/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:57:21 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/12 12:37:16 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char const *s2)
{
	size_t	curr1;
	size_t	curr2;

	curr1 = 0;
	curr2 = 0;
	while (s1[curr1])
		curr1++;
	while (s2[curr2])
	{
		s1[curr1] = s2[curr2];
		curr1++;
		curr2++;
	}
	s1[curr1] = '\0';
	return (s1);
}
