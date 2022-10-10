/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:17:23 by meharit           #+#    #+#             */
/*   Updated: 2022/10/08 22:26:34 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	p;
	int	len;

	p = (char)c;	
	len = ft_strlen(s);

	if (p == '\0')
		return (&s[len]);
	while (len >= 0)
	{
		if (s[len] == p)
			return (&s[len]);
		len--;
	}
	return (0);
}
