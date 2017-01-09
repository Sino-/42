/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:16:15 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/20 10:48:13 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int place;
	int handler;

	place = 1;
	handler = 0;
	if (n == -2147483648)
		handler = 1;
	if (n == -2147483648)
		n++;
	if (n < 0)
	{
		n = n * -1;
		ft_putchar_fd('-', fd);
	}
	while ((n / place) > 9)
		place = place * 10;
	while (place >= 1)
	{
		if (place == 1)
			ft_putchar_fd(((n / place) + handler + 48), fd);
		else
			ft_putchar_fd(((n / place) + 48), fd);
		n = n % place;
		place /= 10;
	}
}
