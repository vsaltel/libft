/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 11:41:48 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/15 11:59:22 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*chain;

	chain = *alst;
	while (chain != NULL)
	{
		*alst = chain->next;
		del(chain->content, chain->content_size);
		free(chain);
		chain = NULL;
		chain = *alst;
	}
}
