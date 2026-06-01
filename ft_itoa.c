/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mgiustin <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/01 10:59:02 by mgiustin         #+#    #+#              */
/*   Updated: 2026/06/01 11:59:08 by mgiustin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nb_len(int n)
{
	size_t	nblen;
	long	nb;

	nb = n;
	nblen = 0;
	if (nb < 0)
	{
		nb *= -1;
		nblen++;
	}
	if (nb == 0)
		return (nblen = 1);
	while (nb != 0)
	{
		nb /= 10;
		nblen++;
	}
	return (nblen);
}

char	*ft_fillnb(char *numb, int n, size_t size)
{
	long	nb;

	nb = n;
	numb[size] = '\0';
	if (nb == 0)
		numb[0] = '0';
	if (nb < 0)
	{
		numb[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		numb[size - 1] = (nb % 10) + '0';
		nb /= 10;
		size--;
	}
	return (numb);
}

char	*ft_itoa(int n)
{
	char	*numb;
	size_t	nblen;

	nblen = ft_nb_len(n);
	numb = malloc(sizeof(char) * (nblen + 1));
	if (!numb)
		return (NULL);
	ft_fillnb(numb, n, nblen);
	return (numb);
}

/* #include <stdio.h>   // Per printf
#include <limits.h>  // Per INT_MIN e INT_MAX
#include <stdlib.h>  // Per free

// Includi qui i prototipi se il main è in un file separato
char *ft_itoa(int n);

int main(void)
{
char *res;

printf("--- TEST FT_ITOA ---\n\n");

// Caso Limite 1: Il numero più piccolo possibile (Sorgente tipica di overflow)
res = ft_itoa(INT_MIN);
printf("Test INT_MIN:\nEsperito: -2147483648\nOttenuto:  %s\n\n", res);
free(res); // Libera sempre la memoria allocata da ft_itoa

// Caso Limite 2: Il numero zero (Gestione dei cicli e della lunghezza)
res = ft_itoa(0);
printf("Test Zero:\nEsperito: 0\nOttenuto:  %s\n\n", res);
free(res);

// Caso Limite 3: Il numero più grande possibile
res = ft_itoa(INT_MAX);
printf("Test INT_MAX:\nEsperito: 2147483647\nOttenuto:  %s\n\n", res);
free(res);

// Test standard: Numero negativo comune
res = ft_itoa(-42);
printf("Test Negativo:\nEsperito: -42\nOttenuto:  %s\n\n", res);
free(res);

return (0);
}
*/
