/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:42:14 by meharit           #+#    #+#             */
/*   Updated: 2022/10/22 02:52:15 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/*
#include<stdio.h>
int main()
{
	t_list *one = ft_lstnew(ft_strdup("1"));
	t_list *two = ft_lstnew(ft_strdup("2"));
	t_list *three = ft_lstnew(ft_strdup("3"));
	one->next = two;
	two -> next = three;

	t_list *back = ft_lstnew("back");
	ft_lstadd_back(&one, back);
	while (one)
	{
		char *res = one->content;
		printf("%s\n",res);
		one = one->next;
	}
}
*/
