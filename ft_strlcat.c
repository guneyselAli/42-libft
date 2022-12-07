/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:01:20 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/07 15:32:08 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	dstlen;
	int	srclen;
	int	catlen;
	int	x;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	catlen = dstsize - dstlen;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	if (dstsize >= 1)
	{
		x = dstlen;
		while (catlen > 1 && *src)
		{
			*(dst + x++) = *src++;
			catlen--;
		}
		*(dst + x) = '\0';
	}
	return (dstlen + srclen);
}
