/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:12:11 by meharit           #+#    #+#             */
/*   Updated: 2022/10/07 17:36:28 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;
	size_t	len;

	len = ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	while (src[j] != '\0' && dstsize > len + 1 + j)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	if (len > dstsize)
		return (ft_strlen(src) + dstsize);
	if (len < dstsize)
		dst[i] = '\0';
	return (len + ft_strlen(src));
}
