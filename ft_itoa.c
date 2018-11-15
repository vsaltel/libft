/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 17:37:36 by vsaltel           #+#    #+#             */
/*   Updated: 2018/11/15 18:03:16 by vsaltel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static 	char	*result(int neg, long n, int size)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(*str) * (size + 2))))
		return (NULL);
	str[size + 1] = '\0';
	if (neg == -1)
		str[0] = '-';
	while (n > 9 || n < -9)
	{
		str[size--] = ((n % 10) * neg) + 48;
		n = n / 10;
	}
	str[size] = ((n % 10)* neg) + 48;
	return (str);
}

char			*ft_itoa(int n)
{
	int	size;
	int	neg;
	long n2;

	size = 0;
	neg = 1;
	n2 = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		size++;
		neg = -1;
	}
	while (n > 9 || n < -9)
	{
		n = n / 10;
		size++;
	}
	return (result(neg, n2, size));
}
