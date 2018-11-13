#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	chain;

	chain = lst;
	while (chain != NULL)
	{
		lst = chain.next;	
		f(chain);
		chain = lst;
	}
}
