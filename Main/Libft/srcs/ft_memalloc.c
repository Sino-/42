/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:27:31 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/13 16:36:55 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*allocated_memory;

	allocated_memory = (void *)malloc(size);
	if (allocated_memory)
		ft_bzero(allocated_memory, size);
	return (allocated_memory);
}
