/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mgiustin <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/01 10:55:43 by mgiustin         #+#    #+#              */
/*   Updated: 2026/06/01 11:59:00 by mgiustin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if (nmemb > 0 && size > (size_t) - 1 / nmemb)
		return (NULL);
	array = malloc(size * nmemb);
	if (!array)
		return (NULL);
	ft_memset(array, 0, nmemb * size);
	return (array);
}
