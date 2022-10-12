/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:35:31 by meharit           #+#    #+#             */
/*   Updated: 2022/10/11 02:51:52 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	first;
	size_t	sec;
	char	*haystack;
	char	*needle;

	haystack = (char *)hay;
	needle = (char *)need;
	first = 0;
	if (!needle[0] || (haystack == NULL && !len))
		return (haystack);
	while (haystack[first])
	{
		sec = 0;
		if (haystack[first] == needle[sec])
		{
			while (needle[sec] && haystack[first + sec] == needle[sec]
				&& first + sec < len)
				sec++;
			if (!needle[sec])
				return (&haystack[first]);
		}
		first++;
	}
	return (NULL);
}
