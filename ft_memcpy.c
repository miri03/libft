/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:04:22 by meharit           #+#    #+#             */
/*   Updated: 2022/10/08 22:45:36 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	size_t	i;
	char *p1;
	char *p2;

	p1 = (char *)dst;
	p2 = (char *)src;
	i = 0;
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (dst);
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char ptr[20] = "qwerty";
//	ft_memcpy(NULL,NULL,6);
//	printf("%s\n",ptr);
	char ptr1[20] = "qwerty";
	memcpy(NULL, NULL,3);
	printf("%s\n",ptr1);
}
*/
