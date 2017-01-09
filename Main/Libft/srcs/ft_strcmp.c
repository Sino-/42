/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:48:15 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/16 01:37:32 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CAST unsigned char const

int	ft_strcmp(char *s1, char *s2)
{
	int curr;
	int return_val;

	curr = 0;
	return_val = 0;
	while (s1[curr])
	{
		if ((CAST)s2[curr] != (CAST)s1[curr])
			return ((CAST)s1[curr] - (CAST)s2[curr]);
		curr++;
	}
	return ((CAST)s1[curr] - (CAST)s2[curr]);
}
