/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:08:01 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/13 16:57:40 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int curr;

	curr = 0;
	if (s)
	{
		while (s[curr] != '\0')
		{
			ft_putchar_fd(s[curr], fd);
			curr++;
		}
	}
}
