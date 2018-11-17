/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:12:54 by tcillard          #+#    #+#             */
/*   Updated: 2018/11/07 18:13:57 by tcillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_numword(char const *s, char c)
{
	int		n;
	int		i;

	n = 0;
	i = 0;
	if (*s != c)
		n++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			n++;
		i++;
	}
	return (n);
}

static int		ft_wordlen(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
	{
		i++;
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		i;
	int		n;

	n = 0;
	if (!(split = (char**)malloc(sizeof (char*) * ft_numword(s, c) + 1)))
		return (NULL);
	while (*s == c && *s)
		s++;
	while (*s)
	{
		i = 0;
		if (!(split[n] = (char*)malloc(sizeof (char*) * ft_wordlen(s, c) + 1)))
			return (NULL);
		while (*s != c && *s)
		{
			split[n][i] = *s;
			i++;
			s++;
		}
		split[n][i] = '\0';
		n++;
		while (*s == c)
			s++;
	}
	split[n] = NULL;
	return (split);
}
