/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:11:21 by meharit           #+#    #+#             */
/*   Updated: 2022/10/21 23:28:22 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include<stdio.h>
int main()
{
	t_list *first = ft_lstnew("1");
	t_list *sec = ft_lstnew("2");
	ft_lstadd_front(&first, sec);
	while(first)
	{
		char *res = first->content;
		printf("%s\n",res);
		first = first->next;
	}
}
*/
