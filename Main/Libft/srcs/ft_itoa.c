/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:21:55 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/15 19:02:15 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoahelper(int n, size_t place, size_t handler, size_t curr)
{
	char	*number_string;

	number_string = (char *)malloc(sizeof(char) * (ft_numofbits(n) + 1));
	if (!number_string)
		return (0);
	if (n == -2147483648)
		handler = 1 + 2147483648 + n++;
	if (n < 0)
	{
		n = n * -1;
		number_string[curr++] = '-';
	}
	while ((n / place) > 9)
		place = place * 10;
	while (place >= 1)
	{
		if (place == 1)
			number_string[curr++] = (n / place) + handler + 48;
		else
			number_string[curr++] = (n / place) + 48;
		n = n % place;
		place /= 10;
	}
	number_string[curr] = '\0';
	return (number_string);
}

char		*ft_itoa(int n)
{
	return (ft_itoahelper(n, 1, 0, 0));
}
