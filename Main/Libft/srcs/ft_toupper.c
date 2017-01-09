/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:04:31 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/02 15:30:25 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int ascii_char)
{
	const int offset = 32;

	if (ascii_char >= 97 && ascii_char <= 122)
		return (ascii_char - offset);
	return (ascii_char);
}
