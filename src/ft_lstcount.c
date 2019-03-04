/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 16:14:28 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/16 16:35:42 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstcount(t_list *alst)
{
	int i;

	i = 0;
	if (alst == NULL)
		return (i);
	while (alst != NULL)
	{
		i++;
		alst = alst->next;
	}
	return (i);
}
