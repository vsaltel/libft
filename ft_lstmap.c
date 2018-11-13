#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *chain;
	t_list *begin;

	if (lst != NULL)
	{
		if (!(chain = malloc(sizeof(t_list))))
			return (NULL);
		chain.content = lst.content;
		chain.content_size = lst.content_size;
		chain.next = NULL;
		begin = chain;
		chain = chain.next;
		lst = lst.next;
	}
	while (lst != NULL)
	{
		if (!(chain = malloc(sizeof(t_list))))
			return (NULL);
		chain.content = lst.content;
		chain.content_size = lst.content_size;
		chain.next = NULL;
		chain = chain.next;
		lst = lst.next;
	}
	return (begin);	
}
