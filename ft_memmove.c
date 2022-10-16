/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:27:47 by meharit           #+#    #+#             */
/*   Updated: 2022/10/16 18:55:36 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			*((char *)(dst + (len - 1))) = *((char *)(src + (len - 1)));
			len--;
		}
	}
	while (i < len)
	{
		*((char *)(dst + i)) = *((char *)(src + i));
		i++;
	}
	return (dst);
}


#include<stdio.h>
#include<string.h>
int main()
{
//	printf("%s\n",ft_memmove(NULL, NULL, 0));
//	printf("%s\n",memmove(NULL,NULL,0));
}


	/*
{	char dst[12] = "0123456789";
	char src[] = "fghjkl";
	char *tt = ft_memmove(&dst[5], src, 5);
//	printf("%s\n",tt);
	char dst1[12] = "0123456789";
	char *t = memmove(&dst1[5], src, 5);
//	printf("%s\n",t);
}*/
