/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mgiustin <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/31 18:56:45 by mgiustin         #+#    #+#              */
/*   Updated: 2026/06/01 11:58:53 by mgiustin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi(const char *nptr)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\f'
		|| *nptr == '\n' || *nptr == '\r' || *nptr == '\v')
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = num * 10 + *nptr - '0';
		nptr++;
	}
	return (num * sign);
}
