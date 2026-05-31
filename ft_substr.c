#include"libft.h"

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    char *sub;

    if (!s)
        return(NULL);
    if (start >= ft_strlen(s))
        len = 0;
    else if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    sub = (char *)malloc(sizeof(*s) * (len + 1));
    i = 0;
    while (s[start] && len > 0)
    {
        sub[i] = s[start];
        i++;
        start++;
        len--;
    }
    sub[i] = '\0';
    return (sub);
}
