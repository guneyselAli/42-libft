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
/*int	main(void)
{
	printf("%s\n", ft_strjoin("merhaba"," ben ali."));
	printf("%s\n", ft_strjoin("merhaba",""));
	printf("%s\n", ft_strjoin(""," ben ali."));
	printf("%s\n", ft_strjoin("",""));
}*/

//Strtrim
/*int	main(void)
{
	char set[] = {32, 9, 10, 11, 12, 13};
	printf("Test 1\n");
	printf("Result:'%s'\n", ft_strtrim(" 	mrb ", set));
	printf("Adress:'%p'\n", ft_strtrim(" 	mrb ", set));
	printf("\n");
	printf("Test 2\n");
	printf("Result:'%s'\n", ft_strtrim(" hello world 	  ", set));
	printf("Adress:'%p'\n", ft_strtrim(" hello world 	  ", set));
	printf("\n");
	printf("Test 3\n");
	printf("Result:'%s'\n", ft_strtrim("", set));
	printf("Adress:'%p'\n", ft_strtrim("", set));
	printf("\n");
	printf("Test 4\n");
	printf("Result:'%s'\n", ft_strtrim(0, set));
	printf("Adress:'%p'\n", ft_strtrim(0, set));
	printf("\n");
	printf("Test 4\n");
	printf("Result:'%s'\n", ft_strtrim(" hello",0));
	printf("Adress:'%p'\n", ft_strtrim(" hello",0));
	printf("\n");
	printf("Test 5\n");
	printf("Result:'%s'\n", ft_strtrim(" hello world 	  ", ""));
	printf("Adress:'%p'\n", ft_strtrim(" hello world 	  ", ""));
}*/

//Split
/*void print_array(char **array)
{
	int i = 0;
	if (!(array + i))
		printf("null");
	else
		while (*(array+i))
		{
			printf("{%s},", *(array+i));
			i++;
		}
	printf("\n");
}
int	main(void)
{
	print_array(ft_split("merhaba benim adım ali. ", ' '));
	print_array(ft_split("   merhaba benim adım ali. ", ' '));
	print_array(ft_split("merhaba benim adım ali. ", 'm'));
	print_array(ft_split("merhaba benim adım ali. ", 0));
	print_array(ft_split("", ' '));
	print_array(ft_split("1m 2m 3m 4m 5m ", 'm'));
}*/
 
 //itoa
 /*int	main(void)
 {
	printf("%s\n",ft_itoa(203948));
	printf("%s\n",ft_itoa(0));
	printf("%s\n",ft_itoa(1));
	printf("%s\n",ft_itoa(-12345));
	printf("%s\n",ft_itoa(214736800));
	printf("%s\n",ft_itoa(-214736800));
	printf("%s\n",ft_itoa(-2147483648));
	printf("%s\n",ft_itoa(2147483647));
 }*/

//strmapi
/*char	some_func(unsigned int n, char c)
{
	if (n % 2 == 0)
		return(ft_toupper(c));
	else
		return(ft_tolower(c));

}
int	main(void)
{
	printf("%s\n",ft_strmapi("abcdEFgH01234jkl24mN", &some_func));
}*/

//striteri
/*void	some_func(unsigned int n, char *c)
{
	if (n % 2 == 0)
		*c = ft_toupper(*c);
	else
		*c = ft_tolower(*c);
}

int	main(void)
{
	char mystring[] = "aBCdefgHJk02912Lmnp";
	ft_striteri(mystring, &some_func);
	printf("%s\n", mystring);
}*/

