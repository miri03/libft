/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:37:25 by meharit           #+#    #+#             */
/*   Updated: 2022/10/16 21:46:42 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char q;
	char *ptr;
	size_t	i;

	i = 0;
	ptr = (char *)b;
	q = (unsigned char) c;
	while (len > i)
	{
		ptr[i] = q;
		i++;
	}
	return (b);
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char ptr[10] = "hello";
	ft_memset(NULL, '0', 6*sizeof(char));
//	printf("%s\n",ptr);
	char ptr1[10] = "hello";
//	memset(NULL, '0', 6*sizeof(char));
//	printf("%s\n",ptr1);
}*/
