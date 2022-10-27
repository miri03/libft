/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:08:12 by meharit           #+#    #+#             */
/*   Updated: 2022/10/22 00:53:55 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list *ft_lstlast(t_list *lst)
{
	while (lst && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
#include<stdio.h>
int main()
{
	char *content = "hello";
	t_list *last;
	t_list *first= ft_lstnew(ft_strdup("first"));
	t_list *mid= ft_lstnew(ft_strdup("sec"));
	t_list *third= ft_lstnew(ft_strdup("third"));

	first->next = mid;
	mid->next = third;
	last = ft_lstlast(first);
	printf("%s\n",last->content);
}*/
