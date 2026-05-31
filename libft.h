#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <stddef.h>

void *ft_memset(void *s, int c, size_t n);
int ft_strlen(const char *str);
size_t ft_strlcpy(char * dst, const char * src, size_t size);
char *ft_substr(char const *s, unsigned int start, size_t len);

#endif