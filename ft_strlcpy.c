/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mgiustin <mgiustin@student.42roma.it>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/22 10:41:18 by mgiustin         #+#    #+#              */
/*   Updated: 2026/05/22 11:02:12 by mgiustin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include <string.h>
#include"libft.h"

size_t ft_strlcpy(char * dst, const char * src, size_t size)
{
    size_t src_len;
    
    src_len = ft_strlen(src);
    if(size == 0)
    {
        return(src_len);
    }
	while (*src != '\0' && size - 1 > 0)
    {
        *dst++ = *src++;
        size--;
    }
    *dst = '\0';
    return (src_len);
}

/* 
int main()
{
    char src[] = "Fabio";
    char dst[] = "Carlo";

    printf("%zu\n", ft_strlcpy(dst, src, 6));
    

    char src1[] = "Fabio";
    char dst1[] = "Carlo";

    printf("%zu\n", strlcpy(dst1, src1, 6));
    printf("%s\n", dst);
    printf("%s\n", dst1);
} */