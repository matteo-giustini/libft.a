/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mgiustin <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/01 11:01:44 by mgiustin         #+#    #+#              */
/*   Updated: 2026/06/01 11:59:41 by mgiustin        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	words_count(char const *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

void	free_matrix(char **mtrx, int j)
{
	while (j > 0)
	{
		j--;
		free(mtrx[j]);
	}
	free(mtrx);
}

void	*fill_words(char **mtrx, char const *s, char c)
{
	int	i;
	int	start;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		mtrx[j] = ft_substr(s, start, i - start);
		if (!mtrx[j])
			return (free_matrix(mtrx, j));
		j++;
	}
	mtrx[j] = NULL;
	return (mtrx);
}

char	**ft_split(char const *s, char c)
{
	char	**mtrx;
	int		dim;

	if (!s)
		return (NULL);
	dim = words_count(s, c);
	mtrx = malloc(sizeof(char *) * (dim + 1));
	if (!mtrx)
		return (NULL);
	if (!fill_words(mtrx, s, c))
		return (NULL);
	return (mtrx);
}
