/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:17:23 by meharit           #+#    #+#             */
/*   Updated: 2022/10/05 23:39:15 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *ptr)
{
	int	len;

	len = 0;
	while (ptr[len] != '\0')
		len++;
	return (len);
}

char	*ft_strrchr(const char *s, int c)
{
	char	p;
	char	*ptr;
	int	len;

	ptr = (char *)s;
	p = (char)c;	
	len = ft_strlen(ptr);

	if (p == '\0')
		return (&ptr[len]);
	while (len >= 0)
	{
		if (ptr[len] == p)
			return (&ptr[len]);
		len--;
	}
	return (0);
}
