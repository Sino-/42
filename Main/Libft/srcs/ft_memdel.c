/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:37:33 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/13 18:30:48 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	size_t	curr1;
**	THIS SHOULD BE REQUIRED
**	curr1 = 0;
**	while (ap[curr1])
**	{
**		free(ap[curr1]);
**		curr1++;
**	}
*/

void	ft_memdel(void **ap)
{
	if (ap)
	{
		free(*ap);
		*ap = NULL;
		ap = NULL;
	}
}
