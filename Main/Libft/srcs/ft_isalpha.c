/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:27:53 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/10 13:50:20 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int ascii_char)
{
	if (ft_islower(ascii_char))
		return (1);
	if (ft_isupper(ascii_char))
		return (1);
	return (0);
}
