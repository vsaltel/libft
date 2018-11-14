/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:56:34 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/12 12:41:56 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	if (ft_strlen(src) == 0)
		return (0);
	while (((unsigned char *)src)[i] && i < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	if (((unsigned char *)src)[i] == '\0')
		((unsigned char *)dst)[i] = '\0';
	while (i < len)
	{
		((unsigned char *)dst)[i] = '\0';
		i++;
	}
	return (dst);
}
