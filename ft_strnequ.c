/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:28:16 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/12 13:44:17 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] &&
			((unsigned char *)s2)[i] && ((unsigned char *)s1)[i] && i <= n)
		i++;
	if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		return (0);
	else
		return (1);
}
