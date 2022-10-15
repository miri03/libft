/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:12:11 by meharit           #+#    #+#             */
/*   Updated: 2022/10/12 00:43:07 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
//	size_t	i;
	size_t	len;

	j = 0;
//	i = 0;
	//if (dst == NULL && dstsize == 0)
	//	return(ft_strlen(src));
	len = 0;

	while (len < dstsize && dst[len])
		len++;

	if (len - 1 == dstsize)
		return (len + ft_strlen(src));
	while (src[j] != '\0' && (len + 1 + j) < dstsize)
	{
	//	i = ft_strlen(dst);
		dst[len + j] = src[j];
		j++;
	}
//	if (len > dstsize)
//		return (ft_strlen(src) + dstsize);
	if (len < dstsize)
		dst[len + j] = '\0';
	return (len + ft_strlen(src));
}
/*
#include<string.h>
#include<stdio.h>

int main()
{
	char dst[] = "edcfvgbhjnjk";
	printf("mine:%lu\n",ft_strlcat(dst, "", ft_strlen(dst)+1));
	printf("dst mine:%s\n",dst);

	char dst1[] = "edcfvgbhjnjk";
	printf("func:%lu\n",strlcat(dst1, "", ft_strlen(dst1)+1));
	printf("dst func:%s\n",dst1);
}*/
