/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:06:37 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/10 13:06:38 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed;

	start = 0;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	while (*(s1 + start) && ft_strchr(set, *(s1 + start)))
		start++;
	end = ft_strlen(s1);
	while (end > 0 && ft_strchr(set, *(s1 + end)))
		end--;
	len = end - start + 2;
	trimmed = malloc(sizeof(char) * len);
	if (!trimmed)
		return (0);
	ft_memmove(trimmed, s1 + start, len - 1);
	*(trimmed + len) = 0;
	return (trimmed);
}
