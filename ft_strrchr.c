/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:06:11 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/07 17:15:12 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (!s)
		return (0);
	if (c == 0)
		return ((char *)(s + len));
	while (len > 0)
	{
		len--;
		if (*(s + len) == (char)c)
			return ((char *)s + len);
	}
	return (0);
}
