//#include<stdio.h>
#include"libft.h"

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}
/* 
 int main()
{
    char str []= "Hello!\0";

    ft_bzero(str, 6);
    printf("%s\n", str);

}
  */