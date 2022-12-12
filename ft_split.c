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

static int	w_count(char const *s, char c)
{
	int		count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) != c && *(s + i))
				i++;
		}
		if (*(s + i) == c)
		{
			while (*(s + i) == c && *(s + i))
				i++;
		}
	}
	return (count);
}

static size_t	w_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) != c && *(s + i))
		i++;
	return (i);
}

static void	append_word(char **array, char const *s, char c)
{	
	size_t		i;
	size_t		len;
	int			x;

	x = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c && *(s + i))
		{	
			len = w_len((s + i), c);
			*(array + x) = malloc(sizeof(char) * (len + 1));
			ft_memcpy(*(array + x), s + i, len);
			*(*(array + x) + len) = '\0';
			i += len;
			x++;
		}
		while (*(s + i) == c && *(s + i))
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**array;

	if (!s)
		return (0);
	word_count = w_count(s, c);
	array = malloc(sizeof(char *) * (word_count + 1));
	if (!array)
		return (0);
	append_word(array, s, c);
	array[word_count] = 0;
	return (array);
}
