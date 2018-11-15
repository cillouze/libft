/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:58:19 by tcillard          #+#    #+#             */
/*   Updated: 2018/11/10 16:51:56 by tcillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int	i;
	char	*cpy;

	i = 0;
	if(!(cpy = (char*)malloc(sizeof(char) * ft_strlen_const(s) + 1)))
		return (0);
	while (s[i])
	{
		cpy[i] = (*f)(s[i]);
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

