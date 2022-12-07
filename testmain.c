#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[] = "Hello WorLd";
	char c[] = "Hello World";
	char e[] = "";
	printf("%d\n", ft_strncmp(a,c,10));
	printf("%d\n", strncmp(a,c,10));
	printf("%d\n", ft_strncmp(a,c,1));
	printf("%d\n", strncmp(a,c,1));
	printf("%d\n", ft_strncmp(a,e,1));
	printf("%d\n", strncmp(a,e,1));
}