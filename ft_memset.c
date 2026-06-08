/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: mgiustin <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/01 11:00:52 by mgiustin         #+#    #+#              */
/*   Updated: 2026/06/01 13:24:51 by mgiustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	if (!s)
		return (NULL);
	ptr = (unsigned char *) s;
	while (n > 0)
	{
		*ptr = (unsigned char) c;
		ptr++;
		n--;
	}
	return (s);
}
