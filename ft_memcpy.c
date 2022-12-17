/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:01:47 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/06 18:04:34 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p_dst;
	const char	*p_src;

	p_dst = dst;
	p_src = src;
	if (!dst && !src)
		return (0);
	while (n > 0)
	{
		*p_dst++ = *p_src++;
		n--;
	}
	return (dst);
}
