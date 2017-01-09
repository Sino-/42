/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:12:57 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/02 15:30:39 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int ascii_char)
{
	const int offset = 32;

	if (ascii_char >= 65 && ascii_char <= 90)
		return (ascii_char + offset);
	return (ascii_char);
}
