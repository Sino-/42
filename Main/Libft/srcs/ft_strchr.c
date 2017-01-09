/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 21:52:21 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/12 22:07:30 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char const *s, int c)
{
	char *s_ptr;

	s_ptr = (char *)s;
	while (*s_ptr)
	{
		if (*s_ptr == c)
			return (s_ptr);
		++s_ptr;
	}
	if (c == 0)
		return (s_ptr);
	return (0);
}
