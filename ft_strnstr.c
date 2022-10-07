/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:35:31 by meharit           #+#    #+#             */
/*   Updated: 2022/10/06 22:42:52 by meharit          ###   ########.fr       */
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
	sec = 0;
	if (needle[sec] == '\0')
		return (haystack);
	while (haystack[first] != '\0' && len > first)
	{
		if (haystack[first] == needle[sec])
		{
			while (haystack[first] == needle[sec] && len >= first)
			{
				sec++;
				first++;
			}
			if (needle[sec - 1] == '\0')
				return (&haystack[first - sec]);
			sec = 0;
		}
		first++;
	}
	return (NULL);
}
