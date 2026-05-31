#include<stdio.h>
#include <string.h>
#include"libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);


    if(size == 0)
        return(src_len);
    if(size <= dst_len)
        return(size + src_len);
    ft_strlcpy(dst + dst_len, src, size - dst_len);
    return(dst_len + ft_strlen(src));
}

int main()
{
    char src[] = "Mario";
    char dst[50] = "Carlo";

    printf("%zu\n", ft_strlcat(dst, src, 11));
    printf("%s\n", dst);

    char src1[] = "Mario";
    char dst1[50] = "Carlo";

    printf("%zu\n", ft_strlcat(dst1, src1, 11));
    printf("%s\n", dst1);
    return(0);
}
