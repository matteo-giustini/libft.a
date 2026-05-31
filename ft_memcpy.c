//#include<stdio.h>
#include"libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *d = dest;
    const char *s = src;

    while(n > 0)
    {
        *d++ = *s++;
        n--;
    }
    return(dest);
}

/* int main()
{
    char src[] = "Helloqwertyuiop";
    char dest[] = "WWWWorld";

    printf("%s\n", (char *)ft_memcpy(dest, src, 12));
} */