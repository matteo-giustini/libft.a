//#include<stdio.h>
//#include <string.h>
#include"libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (n > 0)
    {
        if (*s1 != *s2 || *s1 == '\0')
            return ((unsigned char)*s1 - (unsigned char)*s2);
        s1++;
        s2++;
        n--;
    }
    return (0);
}

/* int main()
{
    char stringa[] = "Navigare nel codice Caaaa";
    char stringb[] = "Navigare nel codice Coooo";

    printf("%d\n", ft_strncmp(stringa, stringb, 23));
    printf("%d\n", strncmp(stringa, stringb, 23));
}
 */