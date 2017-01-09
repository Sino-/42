/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:50:17 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/10 12:08:18 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	unsigned int	val;
	int				curr;
	int				neg;

	neg = 1;
	val = 0;
	curr = 0;
	while (ft_iswhitespace(str[curr]) == 1)
		curr++;
	if (neg == 1 && str[curr] == '-')
		neg = -1;
	if (str[curr] == '+' || str[curr] == '-')
		curr++;
	while (ft_isdigit(str[curr]) == 1)
	{
		if ((val > 2147483647) && neg == 1)
			return (-2147483648);
		if ((val > 2147483648) && neg == -1)
			return (2147483647);
		val = (val * 10) + (str[curr] - 48);
		curr++;
	}
	return ((int)val * neg);
}
