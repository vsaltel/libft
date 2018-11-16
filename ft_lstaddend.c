/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 13:27:51 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/16 13:58:23 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_list *alst, t_list *new)
{
	if (alst == NULL)
		return ;
	while (alst->next != NULL)
		alst = alst->next;
	alst->next = new;
}
