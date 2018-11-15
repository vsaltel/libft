/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:35:45 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/15 16:53:38 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		neg;
	long	res;

	i = 0;
	neg = 1;
	res = 0;
	while ((str[i] == '\f' || str[i] == '\t' || str[i] == '\r' ||
				str[i] == '\n' || str[i] == '\v' || str[i] == ' ')
					&& str[i] != '\0')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] > 47 && str[i] < 58)
	{
		res *= 10;
		res = res + (str[i] - 48);
		i++;
		if (res < 0)
			return (neg == 1) ? -1 : 0;
	}
	return (res * neg);
}
