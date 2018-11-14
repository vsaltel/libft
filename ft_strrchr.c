/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:08:21 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/12 10:57:55 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*occ;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			occ = ((char *)&s[i]);
		i++;
	}
	if (occ != NULL)
		return (occ);
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
