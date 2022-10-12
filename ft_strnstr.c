/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:35:31 by meharit           #+#    #+#             */
/*   Updated: 2022/10/11 02:51:52 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"


char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	first;
	size_t	sec;
	char	*haystack;
	char	*needle;

	haystack = (char *)hay;
	needle = (char *)need;
	first = 0;
	sec = 0;
	if (needle[sec] == '\0')
		return (haystack);
	if (len > 0) //if haystack NULL && len = 0
	{
	while (haystack[first] != '\0' && len > first)
	{
		if (haystack == NULL) // if haystack NULL && len != 0
			return (NULL);
		if (haystack[first] == needle[sec])
		{
			while (haystack[first] == needle[sec] && needle[sec] != '\0' && len >= first)
			{
		//		printf("1/");
				sec++;
				first++;
			}
			if (needle[sec] == '\0')
				return (&haystack[first - sec]);
			sec = 0;
		}
		first++;
	//	printf("2/");
	}
	}
	return (NULL);
}

//haystack NULL && len == 0

/*

#include<string.h>
#include <stdio.h>
#include<limits.h>

int main()
{

    char a[] = "little";
    char b[] = "little";
    printf("%s\n",ft_strnstr(NULL,b,0));
    printf("%s\n",strnstr(NULL,b,0));
}*/
