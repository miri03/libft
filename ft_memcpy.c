/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:04:22 by meharit           #+#    #+#             */
/*   Updated: 2022/10/13 23:47:29 by meharit          ###   ########.fr       */
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
#include<stdio.h>
#include<string.h>
int main()
{
	char ptr[20] = "abc";
	ft_memcpy(ptr, ptr+2, 2);
	printf("mine:%s\n",ptr);
	char ptr1[20] = "abc";
	memcpy(ptr1, ptr1+2, 2);
	printf("func:%s\n",ptr1);
	
	int arr[10] = {1,5,6,8};
	int dest[10] = {2,9,8};
	int i;
	i = 0;
	ft_memcpy(dest, arr, 12);
	while ( i < 5)
	{
		printf("%i, ", dest[i]);
		i++;
	}
	return(0);
}*/
