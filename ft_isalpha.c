//#include <stdio.h>

int ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/* 
int main(void)
{
	char a = 'a';
	char b = '0';
	char c = 'Z';

	printf("%d\n", ft_isalpha(a));
	printf("%d\n", ft_isalpha(b));
	printf("%d\n", ft_isalpha(c));

	return (0);
}
 */