/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:59:17 by meharit           #+#    #+#             */
/*   Updated: 2022/10/21 23:34:19 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_lstsize(t_list *lst)
{
	int		len;

	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}
/*
#include<stdio.h>
int main()
{
	t_list *first= ft_lstnew(ft_strdup("hey babygurl"));
	t_list *mid= ft_lstnew(ft_strdup("hey babygurl"));
	t_list *last= ft_lstnew(ft_strdup("hey babygurl"));

	first->next = mid;
	mid->next = last;

	printf("%d\n",ft_lstsize(first));
}
*/
