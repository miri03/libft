/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:50:53 by meharit           #+#    #+#             */
/*   Updated: 2022/10/16 16:48:39 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	if (size && count > SIZE_MAX / size)
		return (0);
	ptr = (void *)malloc(size * count);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
#include<stdio.h>
int main()
{
	char *ptr1 = (char*)ft_calloc(SIZE_MAX, SIZE_MAX);
	printf("%s\n",ptr1);
	char *ptr = (char*)calloc(SIZE_MAX, SIZE_MAX);
	printf("%s\n",ptr);


}*/
