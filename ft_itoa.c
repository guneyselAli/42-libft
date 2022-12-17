/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 16:07:03 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/10 17:11:53 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_counter(long n)
{
	int	digits;

	digits = 0;
	if (n < 0)
	{
		digits++;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char			*a;
	size_t			len;
	long			nbr;

	nbr = n;
	len = digit_counter(nbr);
	a = malloc(sizeof(char) * len + 1);
	if (!a)
		return (0);
	a[len] = '\0';
	if (nbr == 0)
		a[0] = '0';
	if (n < 0)
	{
		a[0] = '-';
		nbr *= -1;
	}
	while (nbr >= 1)
	{
		len--;
		a[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (a);
}
