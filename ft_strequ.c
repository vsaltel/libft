/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:28:16 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/12 13:38:12 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] &&
			((unsigned char *)s2)[i] && ((unsigned char *)s1)[i])
		i++;
	if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		return (0);
	else
		return (1);
}