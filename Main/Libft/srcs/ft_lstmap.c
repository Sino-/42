/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 00:18:39 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/16 00:45:16 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;

	newlist = (t_list *)'\0';
	if (lst)
	{
		if (!(lst->next))
			newlist = ft_lstnew((f(lst)->content), ((f(lst))->content_size));
		else
		{
			newlist = ft_lstmap((lst->next), f);
			ft_lstadd(&newlist, f(lst));
		}
	}
	return (newlist);
}
