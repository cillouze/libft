/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:10:02 by tcillard          #+#    #+#             */
/*   Updated: 2018/11/17 17:16:17 by tcillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *search, char *find, size_t n)
{
	int		i;
	size_t	len;

	i = 0;
	len = -1;
	if (search == find || *find == '\0')
		return (search);
	if (ft_strlen(search) < ft_strlen(find))
		return (NULL);
	while (*search && ++len < n)
	{
		i = 0;
		while (find[i] != *search && *search && ++len < n)
			search++;
		while (find[i] == search[i] && ++len < n && find[i] && search[i])
			i++;
		if (find[i] == '\0')
			return (search);
		else if (*search)
			search++;
	}
	return (NULL);
}
