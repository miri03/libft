/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:08:12 by meharit           #+#    #+#             */
/*   Updated: 2022/10/21 01:34:38 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *next;
	t_list *help;

	next = lst->next;
	while (next->next != NULL)
	{
		help = lst; 
		next = lst->next;
		lst = next;
	}
	return (help);
}
