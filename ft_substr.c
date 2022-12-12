/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:11:50 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/08 17:35:28 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub;

	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len <= ft_strlen(s) - start)
		sub = malloc(sizeof(char) * (len + 1));
	else
		sub = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	if (!sub || !s)
		return (0);
	while (*(s + start) && (i < len))
		*(sub + i++) = *(s + start++);
	*(sub + i) = '\0';
	return (sub);
}
