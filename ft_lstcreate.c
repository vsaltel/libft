/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcreate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 13:58:37 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/16 15:47:58 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstcreate(int size)
{
	t_list *begin;
	t_list *chain;

	if (size < 1)
		return (NULL);
	if (!(chain = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	chain->content = NULL;
	chain->content_size = 0;
	begin = chain;
	while (--size > 0)
	{
		if (!(chain->next = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		chain = chain->next;
		chain->content = NULL;
		chain->content_size = 0;
	}
	chain->next = NULL;
	return (begin);
}
