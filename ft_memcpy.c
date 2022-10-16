/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:04:22 by meharit           #+#    #+#             */
/*   Updated: 2022/10/15 16:26:27 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	size_t	i;

	if (n == 0 || dst == src)
		return (dst);
	i = 0;
	while (i < n)
	{
		*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
		i++;
	}
	return (dst);
}


/*
#include<string.h>
#include<stdio.h>
int main()
{
	char string[] = "0123456789";
	char string1[] = "0123456789";
	printf("mine: %s\n",ft_memcpy(&string[5], &string[3], 5));
	printf("func: %s\n",memcpy(&string1[5], &string[3], 5));
	printf("s: %s\n",string);
	printf("s1: %s\n", string1);
}*/
