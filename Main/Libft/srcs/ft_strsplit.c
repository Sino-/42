/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolabi <yolabi@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:35:06 by yolabi            #+#    #+#             */
/*   Updated: 2016/11/20 11:08:25 by yolabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define ARRAY_MALLOC_CHECK 	if (!split_arr) return (0)
#define ALLOCATE_STUFF size_t elems; size_t tail; size_t curr; char **split_arr
#define SUBARRAY_MALLOC_CHECK if (!split_arr[i]) return (0)

static size_t	ft_elemcount(char *s, char c)
{
	size_t	curr;
	size_t	elems;

	curr = 0;
	elems = 0;
	while (s[curr])
	{
		while (s[curr] && s[curr] != c)
			curr++;
		if (s[curr] == c || !s[curr])
			elems++;
		while (s[curr] && s[curr] == c)
			curr++;
	}
	return (elems);
}

static char		**ft_strsplit_helper(char *str, char c, size_t head, size_t i)
{
	ALLOCATE_STUFF;
	elems = ft_elemcount(str, c);
	split_arr = (char **)malloc(sizeof(char *) * (elems + 1));
	ARRAY_MALLOC_CHECK;
	while (i < elems)
	{
		curr = 0;
		tail = head;
		while (str[head] && str[head] != c)
			head++;
		split_arr[i] = (char *)malloc(sizeof(char) * (head - tail + 1));
		SUBARRAY_MALLOC_CHECK;
		while (tail < head)
			split_arr[i][curr++] = str[tail++];
		split_arr[i][curr] = '\0';
		while (str[head] == c && str[head])
			head++;
		i++;
	}
	split_arr[i] = malloc(sizeof(char) * (1));
	SUBARRAY_MALLOC_CHECK;
	split_arr[i] = NULL;
	return (split_arr);
}

char			**ft_strsplit(char const *s, char c)
{
	char	*str;

	if (!s || !c)
		return (0);
	str = ft_strtrimchar(s, c);
	if (!str)
		return (0);
	return (ft_strsplit_helper(str, c, 0, 0));
}
