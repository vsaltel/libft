/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:28:16 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/15 18:36:34 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (s1 == NULL)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s2[i] && s1[i] && i < n)
		i++;
	if (s1[i] != s2[i] && i < n)
		return (0);
	else
		return (1);
}
