/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:20:37 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/10 16:06:02 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	w_count(char const *s, char c)
{
	int		count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c && *(s + i + 1))
		{
			count++;
			while (*(s + i) == c)
				i++;
		}
		i++;
	}
	return (count);
}

static size_t	w_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) != c && *(s + i))
	{
		i++;
	}
	return (i);
}

static void	append_word(char **array, char const *s, char c)
{	
	size_t		i;
	size_t		len;
	int			x;
	char		*word;
	char		*ptr_s;

	x = 0;
	i = 0;
	ptr_s = (char *)s;
	while (*(ptr_s + i))
	{
		if (*(ptr_s + i) != c)
		{	
			len = w_len((ptr_s + i), c);
			word = malloc(sizeof(char) * (len + 1));
			ft_memcpy(word, ptr_s + i, len);
			*(word + len) = '\0';
			i += len;
			*(array + x) = word;
			x++;
		}
		while (*(ptr_s + i) == c)
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**array;

	if (!s)
		return (0);
	if (c == 0)
		return (0);
	word_count = w_count(s, c);
	array = malloc(sizeof(char *) * (word_count + 2));
	if (!array)
		return (0);
	append_word(array, s, c);
	array[word_count + 1] = 0;
	return (array);
}
