/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strstr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mgiustin <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/01 11:03:11 by mgiustin         #+#    #+#              */
/*   Updated: 2026/06/01 11:59:56 by mgiustin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *) & big[i]);
	while (big[i] != '\0')
	{
		j = 0;
		while (little[j] == big[i + j] && big[j + i] != '\0')
		{
			j++;
			if (little[j] == '\0')
			{
				return ((char *) & big[i]);
			}
		}
		i++;
	}
	return (0);
}
