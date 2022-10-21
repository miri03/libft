/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:59:17 by meharit           #+#    #+#             */
/*   Updated: 2022/10/20 23:33:29 by meharit          ###   ########.fr       */
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
#include"libft.h"
#include<string.h>
#include<stdio.h>
int main()
{
	t_list *first= ft_lstnew(strdup("hey babygurl"));
	t_list *mid= ft_lstnew(strdup("hey babygurl"));
	t_list *last= ft_lstnew(strdup("hey babygurl"));
	t_list **lst = &first;

	first->next = mid;
	mid->next = last;

	printf("%d\n",ft_lstsize(first));
}
*/
