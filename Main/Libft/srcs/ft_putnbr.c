/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:16:38 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/03 17:16:59 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
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
		ft_putchar('-');
	}
	while ((n / place) > 9)
		place = place * 10;
	while (place >= 1)
	{
		if (place == 1)
			ft_putchar((n / place) + handler + 48);
		else
			ft_putchar((n / place) + 48);
		n = n % place;
		place /= 10;
	}
}
