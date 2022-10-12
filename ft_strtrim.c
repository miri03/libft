/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:30:08 by meharit           #+#    #+#             */
/*   Updated: 2022/10/12 01:33:52 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
	char *ptr;

	ptr = NULL;
	if (s1 == 0)
	{
		ptr = (char *)malloc(sizeof(char));
		*ptr == 0;
	}
	ptr = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);

