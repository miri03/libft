/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:19:48 by meharit           #+#    #+#             */
/*   Updated: 2022/10/13 17:15:51 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*alloc(char const *str, char const *set)
{
	int		i;
	int		size;
	int		len;
	char	*ptr;

	len = ft_strlen(str) - 1;
	size = 0;
	i = 0;
	while (isinset(str[i], set) && str[i])
	{
		size++;
		i++;
	}
	while (isinset(str[len], set) && str[i])
	{
		size++;
		len--;
	}
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(str) - size + 1));
	if (!ptr)
		return (NULL);
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		len;
	int		start;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
//	if (s1 == 0)
//		return (0);
	ptr = alloc(s1, set);
	if (ptr == NULL)
		return (NULL);
	while (isinset(s1[start], set) && s1[start])
		start++;
	while (isinset(s1[len - 1], set) && s1[start])
		len--;
	i = 0;
	while (start < len)
	{
		ptr[i] = s1[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include<stdio.h>
int main()
{
	printf("%s\n",ft_strtrim("ABBABCB","ABC"));
}
*/
