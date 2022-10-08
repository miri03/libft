/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:09:43 by meharit           #+#    #+#             */
/*   Updated: 2022/10/08 00:28:54 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char p;
	char *str;
	size_t	i;

	i = 0;
	str = (char *)s;
	p = (unsigned char) c;
	while (str[i] != '\0' && n > i)
	{
		if (p == str[i])
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

#include<stdio.h>
#include<string.h>
int main()
{
	char *ptr = "fghjfg";
	printf("%s\n",ft_memchr(ptr, '8', 6));
	printf("%s\n",memchr(ptr, '8', 6));

}
