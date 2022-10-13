/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:58:27 by meharit           #+#    #+#             */
/*   Updated: 2022/10/13 01:15:51 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_size(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		size++;


char *ft_itoa(int n)
{
	char	*ptr;
	int		size;

	size = ft_size(n);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (n < 0)
		ptr[0] = '-';


