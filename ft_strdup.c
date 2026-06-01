/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mgiustin <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/01 11:02:02 by mgiustin         #+#    #+#              */
/*   Updated: 2026/06/01 11:59:46 by mgiustin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	size_t	i;
	char	*dup;

	i = 0;
	dup = malloc(sizeof(char) * (strlen(s) + 1));
	if (!dup)
		return (NULL);
	while (*s)
	{
		dup[i] = *s;
		s++;
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
