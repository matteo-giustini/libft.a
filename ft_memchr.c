/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/01 11:00:19 by username         #+#    #+#              */
/*   Updated: 2026/06/01 11:12:25 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*p;

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
