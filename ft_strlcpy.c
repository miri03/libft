/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:33:22 by meharit           #+#    #+#             */
/*   Updated: 2022/10/08 21:54:18 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if ((int)dstsize > 0)
	{		
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// "" dst  dstsize < 0

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char dst[20] = "helloii";
	char src[20] = "world";
	printf("\n%lu\n",ft_strlcpy(dst, src, -1));
	printf("%s\n",dst);
	char *dst1 = "helloii";
	char *src1 = "world";
//	printf("%lu\n",strlcpy(dst, src1, -1));
//	printf("%s\n",dst1);
}*/
