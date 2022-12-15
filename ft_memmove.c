/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:43:12 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/06 19:02:40 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*p_dst;
	const char	*p_src;
	size_t		len;

	p_dst = dst;
	p_src = src;
	if (!dst && !src)
		return (0);
	if (p_dst > p_src)
	{
		while (n > 0)
		{
			n--;
			*(p_dst + n) = *(p_src + n);
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			*(p_dst + len) = *(p_src + len);
			len++;
		}
	}
	return (dst);
}
