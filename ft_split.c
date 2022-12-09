#include "libft.h"

static int	w_count(char const *s, char c)
{
	int 	count;
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

//free yi nerede kullanacağız???

char	**ft_split(char const *s, char c)
{
	int	words;
	char	**array;
	if (!s)
		return (0);
	if (!c)
		return (ft_strdup(s));
	words = w_count(s, c);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (0);
	
}
