/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:53:39 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/14 17:05:20 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

	i = ft_strlen(dst);
	if (i < size)
	{
		ft_strncat(dst, src, size - i - 1);
		return ((size_t)ft_strlen(src) + i);
	}
	else
		return ((size_t)ft_strlen(src) + size);
}
