/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 22:04:10 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/12 22:07:19 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char const *s, int c)
{
	char *s_ptr;

	s_ptr = (char *)s;
	while (*s_ptr)
		++s_ptr;
	if (c == 0)
		return (s_ptr);
	--s_ptr;
	while (*s_ptr)
	{
		if (*s_ptr == c)
			return (s_ptr);
		--s_ptr;
	}
	return (0);
}
