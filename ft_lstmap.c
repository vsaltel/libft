/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 11:40:54 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/14 18:07:13 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*chain;
	t_list	*begin;

	if (lst == NULL)
		return (NULL);
	chain = f(lst);
	begin = chain;
	while (lst->next != NULL)
	{
		chain->next = f(lst->next);
		chain = chain->next;
		lst = lst->next;
	}
	return (begin);
}
