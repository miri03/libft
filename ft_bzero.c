/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:38:41 by meharit           #+#    #+#             */
/*   Updated: 2022/10/15 16:56:45 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *) s;
	i = 0;
	while (n > i)
	{
		ptr[i] = 0;
		i++;
	}
}

/*
#include<stdio.h>
int main()
{
	char str[] = "defgh";
	ft_bzero(str, 5);
	printf("%s\n",str);
}*/
