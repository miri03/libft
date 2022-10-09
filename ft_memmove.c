/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:09:59 by meharit           #+#    #+#             */
/*   Updated: 2022/10/08 22:24:12 by meharit          ###   ########.fr       */
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
	char dst[] = "oldwxceee";
	//char src[] = "old weeeeeee";
	char *tt = ft_memmove(&dst[3], dst, 7);
	printf("%s\n",tt);
	char dst1[] = "qwertyuiop";
	//char src[] = "old weeeee";
	char *t = memmove(&dst1[3], dst1, 7);
	printf("%s\n",t);
}*/
