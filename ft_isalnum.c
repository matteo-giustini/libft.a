//#include<stdio.h>

int ft_isalnum(int c)
{
    return((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/* int main()
{
    char a = '8';
    char b = 'F';
    char c = 'a';
    char d = '&';
    char e = '@';

    printf("%d\n", ft_isalnum(a));
    printf("%d\n", ft_isalnum(b));
    printf("%d\n", ft_isalnum(c));
    printf("%d\n", ft_isalnum(d));
    printf("%d\n", ft_isalnum(e));

    return(0);
} */