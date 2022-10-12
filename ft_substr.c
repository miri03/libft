/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:23:03 by meharit           #+#    #+#             */
/*   Updated: 2022/10/12 01:25:12 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{

	char			*sub;
	unsigned int	i;

	i = 0;
	sub = NULL;
	if (s == 0)
		return(0);
	if (*s == 0)
	{
		sub = (char *)malloc(sizeof(char));
		*sub = 0;
	}
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (i < len)
		{
			sub[i] = s[start];
			i++;
			start++;
		}
	}
	sub[i] = '\0';
	return (sub);
}
/*
#include<stdio.h>
int main()
{
	char test[] = "i just want this part #############";
	printf("%s\n",ft_substr(test, 5, 10));
}*/
