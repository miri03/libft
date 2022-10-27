/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 02:55:20 by meharit           #+#    #+#             */
/*   Updated: 2022/10/22 05:01:37 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL && del)
	{
		del(lst->content);
		free(lst);
	}
}


/*
void	del(void *content)
{
	content  = NULL;
}

#include<stdio.h>
int main()
{
	t_list *one = ft_lstnew(ft_strdup("1"));
	t_list *two = ft_lstnew(ft_strdup("2"));
	one->next = two;
	ft_lstdelone(two, del);
	while (one)
	{
		char *res = one->content;
		printf("%s\n",res);
		one = one->next;
	}
}
*/
