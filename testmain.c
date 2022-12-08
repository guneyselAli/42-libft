#include "libft.h"
#include <stdio.h>
#include <string.h>

//Strlcat
/*int main(void)
{
	char dest[10] = "Hello";
	char *src = ", world!";
	ft_strlcat(dest, src, 10);
	printf("%s\n",dest);

	char dest2[10] = {'H', 'e', 'l', 'l', 'o', '\0', '!', '!', '!', '!'};
	char *src2 = ", world!";
	ft_strlcat(dest2, src2, 10);
	printf("%s\n",dest2);

	char dest3[6] = "Hello";
	char *src3 = ", world!";
	ft_strlcat(dest3, src3, 5);
	printf("%s\n",dest3);
}*/

//Strncmp
/*int	main(void)
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
}*/

//Memchr
/*int	main(void)
{
	char a[] = "Hello WorLd";
	printf("%s\n", ft_memchr(a,'e',25));
	printf("%s\n", memchr(a,'e',25));

	printf("\n");

	printf("%p\n", ft_memchr(a,0,25));
	printf("%p\n", memchr(a,0,25));

	printf("\n");

	printf("%p\n", ft_memchr(a,0,2));
	printf("%p\n", memchr(a,0,2));
		
	printf("\n");

	printf("%s\n", ft_memchr(a,'e',0));
	printf("%s\n", memchr(a,'e',0));

	printf("\n");

	printf("%s\n", ft_memchr("",'e',10));
	printf("%s\n", memchr("",'e',10));
}*/

//Memcmp
/*int	main(void)
{
	char a[]= "hello WorLd!";
	char b[]= "HelLo World.";

	printf("%d\n", ft_memcmp(a,b,2));
	printf("%d\n", memcmp(a,b,2));
	printf("\n");

	char a1[]= "Hello Wor.d!";
	char b1[]= "Hello Worxd.";
	printf("%d\n", ft_memcmp(a1,b1,10));
	printf("%d\n", memcmp(a1,b1,10));
	printf("\n");
	printf("%d\n", ft_memcmp(a,b,0));
	printf("%d\n", memcmp(a,b,0));
	printf("\n");
	printf("%d\n", ft_memcmp("",b,5));
	printf("%d\n", memcmp("",b,5));
}*/

//Strnstr
/*int	main(void)
{
	char a[] = "This is a string";
	char b[] = "a";

	printf("%s\n", ft_strnstr(a,b,10));
	printf("%s\n", strnstr(a,b,10));

	printf("\n");

	printf("%s\n", ft_strnstr(a,"is",10));
	printf("%s\n", strnstr(a,"is",10));
	
	printf("\n");

	printf("%s\n", ft_strnstr(a,"",10));
	printf("%s\n", strnstr(a,"",10));

	printf("\n");

	printf("%s\n", ft_strnstr("","a",60));
	printf("%s\n", strnstr("","a",60));
}*/

//Atoi
/*int	main(void)
{
	char str[] = "  	\t -+-+---928347 asd";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi(" -0012a42"));
	printf("%d\n", ft_atoi("00000-42a1234"));
}*/

//calloc
/*int	main(void)
{
	int *a = ft_calloc(5,4);
	for (int i = 0 ; i < 5 ; i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");
	int *b = ft_calloc(2,4);
	for (int i = 0 ; i < 5 ; i++)
	{
		printf("%d, ", b[i]);
	}
}*/

//Strdup
/*int	main(void)
{
	char str[] = "string to be duplicated.";
	char *p;

	printf("\n");
	p = ft_strdup(str);
	printf("%s\n%p\n", p,p);
	printf("%s\n%p\n", str,str);

	printf("\n");

	char str2[] = "0";
	char *p2;

	p2 = ft_strdup(str2);
	printf("%s\n%p\n", p2,p2);
	printf("%s\n%p\n", str2,str2);
}*/

//Substr
/*int	main(void)
{
	char a[] = "01234567Mystring";
	printf("%s", ft_substr(a,8,3));

	printf("\n");
	char c[] = "abcdefgh";
	char b[] = "zx";
	printf("%s", ft_substr(b,2,15));
}*/

//Strjoin
int	main(void)
{
	printf("%s\n", ft_strjoin("merhaba"," ben ali."));
	printf("%s\n", ft_strjoin("merhaba",""));
	printf("%s\n", ft_strjoin(""," ben ali."));
	printf("%s\n", ft_strjoin("",""));
}