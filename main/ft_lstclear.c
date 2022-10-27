/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 03:22:42 by meharit           #+#    #+#             */
/*   Updated: 2022/10/22 04:59:24 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list  *temp;

	if (lst == NULL || del == NULL)
		return;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}

/*
void	del(void *content)
{
	content = NULL;
}


#include<stdio.h>
int main()
{
	t_list *one = ft_lstnew(ft_strdup("1"));
	t_list *two = ft_lstnew(ft_strdup("2"));
	t_list *three = ft_lstnew(ft_strdup("1"));
	t_list *four = ft_lstnew(ft_strdup("2"));
	one->next = two;
	two->next = three;
	three->next = four;

	ft_lstclear(&three, del);
	while(one)
	{
		char *res = one->content;
		printf("%s\n", res);
		one = one->next;
	}
}
*/
	
