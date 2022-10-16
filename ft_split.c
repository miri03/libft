/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:02:07 by meharit           #+#    #+#             */
/*   Updated: 2022/10/16 23:48:04 by meharit          ###   ########.fr       */
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
		while (s[i] == c)
			i++;
		if (s[i - 1] == c)
			delim++;
		i++;
	}
	if (s[i - 1] == c)
	   delim--;	
	return (delim + 1);
}

char	*ft_string(char const *string, char c, int *skip)
{
	char	*str;
	int		len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	len = 0;
	if (len == 0 && string[0] == c)
	{
		while (string[len] && string[len] == c)
		{
			len++;
			j++;
		}
	}
	while (string[len] && string[len] != c)
		len++;
	while ( string[len + j] && string[len + j] == c)
		j++;
//	printf("%d	", j);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (len > i)
	{
		str[i] = string[i];
		i++;
	}
	printf("j=%d\n",j);
	*skip = len + j;
//	printf("%s\n",str);
	str[i] = '\0';
	return (str);
}

char **ft_split(char const *s, char c)
{
	int	i;
	char **ptr;
	int skip;
	int	size;

	size = count_delim(s, c);
	i = 0;
//	printf("%d\n",size); //delim start & end
	ptr = (char **)malloc(sizeof(char *) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = ft_string(s, c, &skip);
		s += skip;
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}

#include<stdio.h>
int main()
{
	int i = 0;
	char **ptr = ft_split("**split*******this*for***me**!", '*');
 	while (i < 5)
	{
		printf("%s\n",ptr[i]);
		i++;
	}
}
