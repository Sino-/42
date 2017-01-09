/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:53:53 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/03 15:54:11 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int len;
	int curr;
	int curr2;

	len = 0;
	curr = 0;
	curr2 = 0;
	while (to_find[len])
		len++;
	if (len == 0)
		return (str);
	while (str[curr])
	{
		while (to_find[curr2] == str[curr + curr2])
		{
			if (curr2 >= (len - 1))
				return (str + curr);
			curr2++;
		}
		curr2 = 0;
		curr++;
	}
	return (0);
}
