/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:58:27 by meharit           #+#    #+#             */
/*   Updated: 2022/10/13 15:13:59 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

int	ft_size(int n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n > 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}


char *ft_itoa(int n)
{
	char	*ptr;
	int		size;
	int		i;

	i = 0;
	size = ft_size(n);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	ptr[size] = '\0';
	if (n < 0)
	{
		printf("0\n");
		i++;
		ptr[0] = '-';
		n *= -1;
		printf("n->%d\n",n);
	}
	if (n - 1 == 2147483647 && n * -1 > 0)
	{
		printf("1\n");
		n -= 1;
	}
	while (i <= size - 1)
	{
		ptr[size - 1] = (n % 10) + '0';
		printf("%c  ",ptr[size - 1]);
		n = n / 10;
		size--;
	}
	return (ptr);
}

#include<limits.h>
#include<stdio.h>
int main()
{
	printf("%s\n",ft_itoa(-36847));
	printf("%d\n",INT_MIN);
}
