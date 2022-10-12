/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:27:22 by meharit           #+#    #+#             */
/*   Updated: 2022/10/10 22:35:03 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h" 

char	*ft_strdup(const char *s1)
{
	int	i;
	char *ptr;

	i = 0;
	ptr = NULL;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
//insufficient memory?
#include<stdio.h>
int main()
{
	char *s1 = "hello";
	printf("%s\n",ft_strdup(s1));
}*/
