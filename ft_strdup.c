/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/01 11:02:02 by username         #+#    #+#              */
/*   Updated: 2026/06/01 11:14:57 by username        ###   ########.fr        */
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
