/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:04:22 by meharit           #+#    #+#             */
/*   Updated: 2022/10/11 17:47:21 by meharit          ###   ########.fr       */
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
		*((char *)(dst + i)) = *((char *)(src + i));
		i++;
	}
	return (dst);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char ptr[20] = "abc";
	ft_memcpy(ptr, ptr+3, 2);
	printf("mine:%s\n",ptr);
	char ptr1[20] = "abc";
	memcpy(ptr1, ptr1+3, 2);
	printf("func:%s\n",ptr1);
}*/
