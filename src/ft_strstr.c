/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:46:47 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/12 12:38:28 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (((unsigned char *)haystack)[i])
	{
		j = 0;
		while ((((unsigned char *)haystack)[i + j] ==
					((unsigned char *)needle)[j])
						&& ((unsigned char *)haystack)[i + j] != '\0')
		{
			if (((unsigned char *)needle)[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
