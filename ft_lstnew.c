#include "t_list.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list **chain;

	if (!(chain = malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		chain.content = NULL;
		chain.content_size = 0;
	}
	else
	{
		chain.data = content;
		chain.content_size = content_size;
	}
	chain.next = NULL;
	return (chain);
}
