/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:16:11 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/20 04:27:56 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 && s2)
		return (0);
	else if (!s2 && s1)
		return (0);
	else if (!s1 && !s2)
		return (1);
	else if (n == 0)
		return (1);
	else if (ft_strncmp((char *)s1, (char *)s2, n) == 0)
		return (1);
	else
		return (0);
}
