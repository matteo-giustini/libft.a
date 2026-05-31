#include<stdio.h>

int ft_isascii(int c)
{
    return(c >= 0 && c <= 127);
}

/* int main()
{
    char a = 'b';
    char b = '0';
    char c = '/';
    char d = 'R';
    char e = 'è';

    printf("%d\n", ft_isascii(a));
    printf("%d\n", ft_isascii(b));
    printf("%d\n", ft_isascii(c));
    printf("%d\n", ft_isascii(d));
    printf("%d\n", ft_isascii(e));

    return(0);
} */