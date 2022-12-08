/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:52:26 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/08 14:22:42 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && x < len)
	{
		while (*(haystack + x + y) == *(needle + y) && (x + y) < len)
		{
			y++;
			if (!*(needle + y))
				return ((char *)haystack + x);
		}
		x++;
		y = 0;
	}
	return (0);
}
