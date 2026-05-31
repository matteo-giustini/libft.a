#include"libft.h"

void *calloc(size_t nmemb, size_t size)
{
    void *array;

    if (size == 0 || nmemb == 0)
        return (malloc(0));
    if (nmemb > 0 && size > (size_t) -1 / nmemb)
        return NULL;
    array = malloc(size * nmemb);
    if (!array)
        return NULL;
    ft_memset(array, 0, nmemb * size);
    return (array);
}