/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:09:59 by meharit           #+#    #+#             */
/*   Updated: 2022/10/12 00:45:04 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	char *sour;
	size_t	i;

	dest = (char *)dst;
	sour = (char *)src;
	i = 0;
	while (i < len)
	{
		dest[i] = sour[i];
		i++;
	}
	return (dst);
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char dst[12] = "hello";
	char src[] = "qwerty";
	char *tt = ft_memmove(&dst[4], dst, 7);
	printf("%s\n",tt);
	char dst1[12] = "helloqwerty";
	char src1[] = "qwerty";
	char *t = memmove(&dst1[4], dst1, 8);
	printf("%s\n",t);
}
*/
