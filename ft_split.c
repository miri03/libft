/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:46:32 by meharit           #+#    #+#             */
/*   Updated: 2022/10/17 22:24:48 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

static int	ft_size(char const *s, char c)
{
	int	i;
	int	word;

	word = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		/*if(s[i] == c)
		  {
		  delim++;
		  while (s[i] && s[i] == c)
		  i++;
		  }
		  i++;*/
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			word++;
		while (s[i] && s[i] != c)
			i++;
	}
	/*	if (s[0] != c)
		delim++;*/
	return (word);
}

static char*	ft_word(char const  *s, int size)
{
	char	*word;
	int	i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (size + 1));
	while (size > i)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	char **result;
	int	size;
	int	j;
	int	alloc;
	int	i;

	i = 0;
	j = 0;
	size  = ft_size(s, c);
	result = (char **)malloc(sizeof(char *) * (size + 1)); // +1
	if (s == NULL || result == NULL)
	{
		result[i] = NULL;
		return (result);
	}
	while (s[j])
	{
		alloc = 0;
		while (s[j] && s[j] == c)
			j++;
		while (s[j+alloc] != c && s[j+alloc])
			alloc++;
		result[i] = ft_word(&s[j],alloc);
		if (result[i] == NULL)
			free(result);
		i++;
		j+=alloc;
	}

	//	i--;
	result[i] = 0;
	//	i = 0;
	//	while (i < 6)
	//	{
	//		printf("%s\n",result[i]);
	//		i++;
	//	}
	return (result);
}

#include<stdio.h>
int main()
{
	int i = 0;
	char **ptr = ft_split(NULL, '*');
	while (i < 6)
	{
		printf("%s\n",ptr[i]);
		i++;
	}
}
