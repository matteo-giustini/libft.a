/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mgiustin <mgiustin@student.42roma.it>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/21 18:04:49 by mgiustin         #+#    #+#              */
/*   Updated: 2026/05/22 10:33:32 by mgiustin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include <string.h>
#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d = (unsigned char *) dest;
	unsigned char	*s = (unsigned char *) src;

	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}

/* int	main(void)
{
char	array1[] = "Ciao mondo!";
char	array2[] = "Ciao mondo!";

// Test con la tua ft_memmove
char	*d1 = &array1[0];
char	*s1 = &array1[2];

printf("ft_memmove: %s\n", (char *) ft_memmove(d1, s1, 5));
// Test con la memmove originale
char	*d2 = &array2[0];
char	*s2 = &array2[2];

printf("   memmove: %s\n", (char *) memmove(d2, s2, 5));
return (0);
}
*/
