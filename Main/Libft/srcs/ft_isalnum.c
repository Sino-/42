/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:11:35 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/06 17:12:47 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ascii_char)
{
	if (ft_isalpha(ascii_char))
		return (1);
	if (ft_isdigit(ascii_char))
		return (1);
	return (0);
}
