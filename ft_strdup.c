#include"libft.h"

char *strdup(const char *s)
{
    size_t i;
    char *dup;

    i = 0;
    dup = malloc(sizeof(char) * (strlen(s) + 1));
    if (!dup)
        return NULL;
    while (*s)
        {
            dup[i] = *s;
            s++;
            i++;
        }
    dup[i] = '\0';
    return (dup);
}