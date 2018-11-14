/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:35:45 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/12 10:38:58 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 0;
	res = 0;
	while ((str[i] == '\f' || str[i] == '\t' || str[i] == '\r' ||
				str[i] == '\n' || str[i] == '\v' || str[i] == ' ')
					&& str[i] != '\0')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] > 47 && str[i] < 58)
	{
		res *= 10;
		res = res + (str[i] - 48);
		i++;
	}
	if (neg == 1)
		res = -res;
	return (res);
}
