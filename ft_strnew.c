/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:09:22 by tcillard          #+#    #+#             */
/*   Updated: 2018/11/17 17:14:19 by tcillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t n)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = malloc(sizeof(char) * n + 1)))
		return (NULL);
	str[n + 1] = '\0';
	while (str[i])
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
