/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 00:10:20 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/16 00:16:00 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst)
	{
		if (!(lst->next))
			f(lst);
		else
		{
			ft_lstiter((lst->next), f);
			f(lst);
		}
	}
}
