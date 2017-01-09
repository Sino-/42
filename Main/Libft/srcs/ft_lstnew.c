/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 20:44:37 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/13 21:25:10 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (0);
	if (!content)
	{
		new_node->content = (t_list *)'\0';
		new_node->content_size = 0;
	}
	else
	{
		new_node->content_size = content_size;
		new_node->content = malloc(sizeof(content) * content_size);
		if (new_node->content)
			ft_memmove(new_node->content, content, content_size);
	}
	new_node->next = (t_list *)'\0';
	return (new_node);
}
