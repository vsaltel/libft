/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:31:56 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/12 15:54:11 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	end;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
		i++;
	end = i;
	while (s[end])
		end++;
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t' ||
				s[end] == '\0') && end > i)
		end--;
	if (!(str = (char *)malloc(sizeof(*str) * (end - i) + 2)))
		return (NULL);
	j = 0;
	while (i <= end)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}