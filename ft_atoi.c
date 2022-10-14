/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:47:54 by meharit           #+#    #+#             */
/*   Updated: 2022/10/13 18:32:48 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<limits.h>
#include<stdio.h>


int	ft_atoi(const char *str)
{
	unsigned long long result;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		if (result > LLONG_MAX && sign == 1)
			return (-1) ;
		if (result > LLONG_MAX && sign == -1)
			return (0) ;
		i++;
	}
	return ((int)((int)result * sign));
}

#include<stdio.h>
#include<stdlib.h>
/*
int main(int ac, char **av)
{
	printf("\n%d\n",ft_atoi(av[1]));
	printf("%d\n", atoi(av[2]));
} */
