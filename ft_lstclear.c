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

	if (!lst || !del)
		return;
	while (*lst)
	{
		temp = (*lst)->next;
		//ft_lstdelone(*lst, (*del)(*lst,*lst->content));
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}	