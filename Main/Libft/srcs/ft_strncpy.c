/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:51:36 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/03 15:52:05 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int curr;

	curr = 0;
	while ((n > curr) && src[curr])
	{
		dest[curr] = src[curr];
		curr++;
	}
	while (n > curr)
		dest[curr++] = '\0';
	return (dest);
}
