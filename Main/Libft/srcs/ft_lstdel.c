/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 23:37:48 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/15 23:49:33 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (!(*alst)->next)
		ft_lstdelone(alst, del);
	else
	{
		ft_lstdel(&(*alst)->next, del);
		ft_lstdelone(alst, del);
	}
}
