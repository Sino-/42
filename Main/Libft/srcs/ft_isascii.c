/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:09:13 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/07 15:25:02 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int ascii_char)
{
	if ((ascii_char) >= 0 && (ascii_char <= 127))
		return (1);
	return (0);
}
