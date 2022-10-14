/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:23:30 by meharit           #+#    #+#             */
/*   Updated: 2022/10/14 23:07:07 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if ( s != NULL)
	{	
		i = 0;
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}


/*
void	f(unsigned int i, char *str)
{
	str[0] = str[0] + i;
}

#include<stdio.h>
int main()
{
	char str[] = "hello";
	ft_striteri(str, f);
	printf("\n%s",str);
}*/
