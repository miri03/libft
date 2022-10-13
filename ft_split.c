/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:02:07 by meharit           #+#    #+#             */
/*   Updated: 2022/10/13 00:57:57 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

#include<stdio.h>

int	count_delim(const char *s, char c)
{
	int	delim;
	int	i;

	delim = 0;
	i = 0;
	if (s[0] == c)
		delim--;
	while (s[i])
	{
		if (s[i] == c)
			delim++;
		i++;
	}
	if (s[i - 1] == c)
	   delim--;	
	return (delim + 1);
}

char	*ft_string(char const *string, char c)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (string[len] != c)
	{
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (len > i)
	{
		str[i] = string[i];
		i++;
	}
	str[i] = '\0';
	printf("%s\n", str);
	return (str);
}

int	ft_skip(char const *string, char c)
{
	int	i;

	i = 0;
	while (string[i] != c)
		i++;
	return (i);
}

char **ft_split(char const *s, char c)
{
	int	i;
	char **ptr;
	int skip;
	int	size;

	size = count_delim(s, c);
	i = 0;
	skip = 0;
	ptr = (char **)malloc(sizeof(char *) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
	//	printf("full:%s\n",&s[skip]);
		ptr[i] = ft_string(&s[skip], c);
		skip += ft_skip(&s[skip], c);
		printf("skip:%d\n",skip);
	//	printf("skip%d\n",skip);
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}

#include<stdio.h>
int main()
{
	int i = 0;
	char **ptr = ft_split("hello$how$are$you", '$');
// 	while (i < 5)
//	{
//		printf("%s\n",ptr[i]);
//		i++;
//	}
}
