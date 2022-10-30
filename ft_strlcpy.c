/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:33:22 by meharit           #+#    #+#             */
/*   Updated: 2022/10/28 22:29:29 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{		
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
			printf("%zu\n",i);
		}
		printf("last= %zu\n",i);
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

#include<string.h>
int main()
{
	char dst[] = "hello";
	char src[] = "testqwerty";
	size_t i = ft_strlcpy(dst,src, 0);
	printf("fn: %zu",i);
	printf("%s\n",dst);
}
