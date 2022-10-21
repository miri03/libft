/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:09:43 by meharit           #+#    #+#             */
/*   Updated: 2022/10/21 20:44:04 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	p;
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	p = (unsigned char) c;
	while (str[i] && str[i] != p && n > i)
	
//	while (i <= ft_strlen(s) && str[i] != p && n > i)
	{
	//	printf("%zu\n",i);
		i++;
	}
	//if (i < n && i <= ft_strlen(s))

	if (i < n || str[i] == '\0')
		return ((void *)&str[i]);
	return (NULL);
}

/*
int main()
{
	printf("func: %s\n",ft_memchr("hello",'\0',47));
}*/
