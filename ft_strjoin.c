/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:16:03 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/15 18:34:42 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (s1 == NULL)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(str = malloc(sizeof(str) * i)))
		return (NULL);
	i = 0;
	while (((unsigned char *)s1)[i])
	{
		((unsigned char *)str)[i] = ((unsigned char *)s1)[i];
		i++;
	}
	j = i;
	i = 0;
	while (((unsigned char *)s2)[i])
	{
		((unsigned char *)str)[j] = ((unsigned char *)s2)[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
