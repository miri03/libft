#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if(lst == NULL || !f)
		return;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void	f(void *content)
{
	char *str = content;
	str[0] = '1';
}

#include<stdio.h>
int main()
{
	t_list *one = ft_lstnew(ft_strdup("a"));
	t_list *two = ft_lstnew(ft_strdup("b"));
	one->next = two;
	ft_lstiter(one,f);
	while (one)
	{
		char *re = one->content;
		printf("%s\n",re);
		one = one->next;
	}
}
*/
