#include "libft.h"
#include <stdio.h>
#include <string.h>

//ft_atoi
/*
int main(void)
{
    char *a = "   -230948";
    char *b = "023948 ";
    char c[] = {'+', '0', '2', '1', '9'};

    printf("%d\n", ft_atoi(a));
    printf("%d\n", ft_atoi(b));
    printf("%d\n", ft_atoi(c));
    printf("%d\n", ft_atoi(0));
}
*/

//ft_bzero
/*int main(void)
{
    int *a = malloc(10);

    ft_bzero(a,10);
    for (int i = 0 ; i < 10; i++)
        printf("%d, ", a[i]);

    printf("\n%s", (char *)a);
}*/

//ft_calloc
/*int main(void)
{
    int *a = ft_calloc(1,10);

    for (int i = 0 ; i < 10; i++)
        printf("%d, ", a[i]);

}*/

//ft_isalnum
/*int main(void)
{
    char *mystring = "012_ 3ad34c . ";
    int i = 0;

    while (mystring[i])
    {
        printf("%c:%d\n", mystring[i], ft_isalnum(mystring[i]));
        i++;
    }
}*/

//ft_isalpha
/*int main()
{
    char *mystring = "a02f9jsd98h23z";
    int i = 0;

    while (mystring[i])
    {
        printf("%c: %d\n", mystring[i], ft_isalpha(mystring[i]));
        i++;
    }
}*/

//ft_isascii
/*int main(void)
{
    char* mystring = "032kxçşwölö";

    int i = 0;

    while (mystring[i])
    {
        printf("%c:%d\n", (unsigned char)mystring[i], ft_isascii(mystring[i]));
        i++;
    }
}*/

//ft_isdigit
/*int main(void)
{
    char *mystring = "230rcj92";

    int i = 0;

    while (mystring[i])
    {
        printf("%c:%d\n", mystring[i], ft_isdigit(mystring[i]));
        i++;
    }
}*/

//ft_isprint
/*int main(void)
{
    unsigned char mystring[]= {1,200, 3,96,98,97, 127, 3, 0};

    int i = 0;

    while (mystring[i])
    {
        printf("%c:%d\n", mystring[i], ft_isprint(mystring[i]));
        i++;
    }
}*/

//ft_itoa
/*int main(void)
{
    printf("%s\n", ft_itoa(302984532));
    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(-302984532));
    printf("%s\n", ft_itoa(3092123));
    printf("%s\n", ft_itoa(-32));
    printf("%s\n", ft_itoa((-2147483648)));
}*/

//ft_lstadd_back
/*int main(void)
{
    t_list *mylist;
    int content[] = {0,10,20,30,40,55};
    t_list *ptr;

    mylist = ft_lstnew(content);
    ptr = mylist;
    for (int i = 1; i < 6; i++)
    {
        ft_lstadd_back(&mylist, ft_lstnew(content+i));
    }
    while(ptr)
    {
        printf("%d\n", *(int *)(ptr->content));
        ptr = ptr->next;
    }
}*/

//ft_lstadd_front
/*int main(void)
{
    t_list *ptr;
    t_list *mylist;
    int i[] = {0,11,22,33,44,55};

    mylist = malloc(sizeof(t_list));
    mylist->content = i;
    mylist->next = 0;

    for (int a = 1; a<6 ; a++)
    {
        ptr = ft_lstnew(i+a);
        ft_lstadd_front(&mylist, ptr);
    }

    while(ptr)
    {
        printf("%d\n", *(int *)ptr->content);
        ptr = ptr->next;
    }    
}*/

//ft_lstclear
/*void some_func(void *ptr)
{
    ptr = 0;
}
int main(void)
{
    t_list *mylist = ft_lstnew("a");
    
    mylist->next = ft_lstnew("b");
    mylist->next->next = ft_lstnew("c");

    t_list *ptr;
    ptr = mylist;
    while (ptr)
    {
        printf("%c, ", *(char *)ptr->content);
        ptr = ptr->next;
    }
    printf("\n");
    ft_lstclear(&mylist, &some_func);
    while (mylist)
    {
        printf("%c, ", *(char *)mylist->content);
        mylist = mylist->next;
    }
}*/

//ft_lstiter
/*void some_func(void *ptr)
{
    *(int *)ptr = 2**(int *)ptr;
}
int main(void)
{
    t_list *mylist;
    int a[] = {0,1,2,3,4};
    mylist = ft_lstnew(a);
    for (int i = 1 ; i < 5 ; i ++)
        ft_lstadd_back(&mylist, ft_lstnew(a+i));
    ft_lstiter(mylist, &some_func);
    while(mylist)
    {
        printf("%d\n", *(int *)mylist->content);
        mylist = mylist->next;
    }
}*/

//ft_lstlast
/*int main(void)
{
    t_list mylist;
    t_list *ptr;
    ptr = &mylist;

    mylist.next = 0;
    mylist.content = "";
    int a[] = {0,1,2,3,4,5,6};

    for (int i = 1; i < 7; i++)
        ft_lstadd_back(&ptr, ft_lstnew(a+i));
    
    printf("%d",*(int *)ft_lstlast(&mylist)->content);
}*/


//ft_lstmap
/*void *some_func(void *ptr)
{
    if (*(int *)ptr % 2 != 0)
        *(int *)ptr *= 2;
    return (ptr);
}
void del(void *ptr)
{
    ptr = 0;
}
int main(void)
{
    int a[] = {0,1,2,3,4,5,6};
    t_list *list1 = ft_lstnew(a);
    for (int i = 1; i < 7 ; i++)
        ft_lstadd_back(&list1, ft_lstnew(a + i));
    t_list *newlist = ft_lstmap(list1, &some_func, &del);
    while (newlist)
    {
        printf("%d, ", *(int *)newlist->content);
        newlist = newlist->next;
    }
    printf("\n");
}*/

//ft_listsize
/*int main(void)
{
    t_list *mylist;

    mylist = ft_lstnew("a");    
    for (int i = 0; i < 6 ; i++)
        ft_lstadd_back(&mylist, ft_lstnew("a"));

    printf("%d", ft_lstsize(mylist));
}*/

