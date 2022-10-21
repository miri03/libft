/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:51:46 by meharit           #+#    #+#             */
/*   Updated: 2022/10/21 20:22:08 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	p;
	char	*ptr;

	ptr = (char *)s;
	p = (char)c;
	while (*ptr != '\0')
	{
		if (*ptr == p)
			return (ptr);
		ptr++;
	}
	if (c == '\0')
		return (ptr);
	return (0);
}
