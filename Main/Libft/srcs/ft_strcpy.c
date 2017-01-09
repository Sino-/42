/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:53 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/03 15:47:00 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int curr;

	curr = 0;
	while (src[curr])
	{
		dest[curr] = src[curr];
		curr++;
	}
	dest[curr] = '\0';
	return (dest);
}
