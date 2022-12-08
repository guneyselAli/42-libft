/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:36:09 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/08 16:40:54 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*a;

	len = ft_strlen(s1);
	a = malloc(sizeof(char) * (len + 1));
	if (!a)
		return (0);
	ft_memcpy(a, s1, len + 1);
	return (a);
}
