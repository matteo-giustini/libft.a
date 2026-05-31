//#include<stdio.h>
#include"libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;

    while (n > 0)
    {
        *ptr = (unsigned char)c;
        ptr++;
        n--;
     }
     return(s);
}

/* int main()
{
    char str []= "Hello!\0";

    printf("%s\n", (char *)ft_memset(str, 54, 6));

}
 */

