/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mgiustin <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/01 11:00:19 by mgiustin         #+#    #+#              */
/*   Updated: 2026/06/01 11:59:31 by mgiustin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*p;

	if (!str)
		return (NULL);
	p = (const unsigned char *) str;
	while (n > 0)
	{
		if (*p == (unsigned char) c)
			return ((void *) p);
		p++;
		n--;
	}
	return (NULL);
}
