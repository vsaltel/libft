#include "t_list.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	**chain;

	chain = alst;
	while (chain != NULL)
	{
		alst = chain.next;
		del(chain.content, chain.content_size);
		free(chain);
		*chain = NULL;
		chain = alst;
	}
}
