/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:09:43 by meharit           #+#    #+#             */
/*   Updated: 2022/10/11 18:20:22 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char p;
	unsigned char *str;
	size_t	i;

	i = 0;
	str = (unsigned char *)s;
	p = (unsigned char) c;
	while (str[i] != '\0' && n > i)
	{
		if (p == str[i])
			return ((void *)&str[i]);
		i++;
	}
	if (c == '\0' && str[i] == '\0')
		return ((void *)&str[i]);

	return (NULL);
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char ptr[] = "asdf";
	printf("%s\n",ft_memchr(ptr, 'd', 3));
	printf("%s\n",memchr(ptr, 'd', 3));
}*/
