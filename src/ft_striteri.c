/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 17:08:48 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/16 17:31:49 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;
	int j;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	j = ft_strlen(s);
	while (i < j)
	{
		f(i, &s[i]);
		i++;
	}
}
