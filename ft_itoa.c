/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:40:09 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/14 17:05:37 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*intmin(void)
{
	char	*str;

	if (!(str = malloc(sizeof(char) * (11))))
		return (NULL);
	str = "-2147483648";
	return (str);
}

static char	*result(int size, int n, int nbr2)
{
	char	*str;
	int		x;

	if (!(str = malloc(sizeof(char) * (size))))
		return (NULL);
	str[size] = '\0';
	x = size - 1;
	if (n == 1)
		str[0] = '-';
	else
		str[0] = '0';
	while (nbr2 > 0)
	{
		str[x] = (nbr2 % 10) + 48;
		nbr2 = nbr2 / 10;
		x--;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	int size;
	int nbr2;
	int nbr;

	size = 0;
	nbr = 0;
	if (n == -2147483648)
		return (intmin());
	else
		nbr2 = (n < 0 ? -n : n);
	if (n < 0)
	{
		size++;
		nbr = 1;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (result(size, nbr, nbr2));
}
