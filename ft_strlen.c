//#include<stdio.h>

int ft_strlen(const char *str)
{
    int len = 0;

     while(*str)
     {
        str++;
        len++;
     }
     return(len);
}
/* 
int main()
{
    char str[] = "Hello!";

    printf("%d\n", ft_strlen(str));
    return(0);
} */