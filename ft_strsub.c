/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:14:38 by tcillard          #+#    #+#             */
/*   Updated: 2018/11/07 18:15:30 by tcillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		n;
	size_t		i;
	char	*cpy;

	n = 0;
	i = (int)start;
	if (len == 0 || start > (unsigned int) ft_strlen_const(s)
			|| s == '\0' )
		return (NULL);
	if (!(cpy = (char*)malloc(sizeof (char) * len + 1)))
		return (NULL);
	while (n < len)
	{
		cpy[n] = s[i];
		n++;
		i++;
	}
	cpy[n] = '\0';
	return (cpy);
}
