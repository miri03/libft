/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:50:53 by meharit           #+#    #+#             */
/*   Updated: 2022/10/08 22:23:28 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"


void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	ptr = NULL;
	ptr = (void *)malloc(sizeof(count * size));
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, count);
	return (ptr);
}

/*
#include<stdio.h>
int main()
{
	char *ptr1 = ft_calloc(5, 4 * sizeof(char));
	printf("%d\n",ptr1[1]);

	char *ptr = calloc(5, 4 * sizeof(char));
	printf("%d",ptr[1]);
}*/
