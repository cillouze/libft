/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:52:22 by tcillard          #+#    #+#             */
/*   Updated: 2018/11/07 17:53:10 by tcillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *c)
{
	char	*cpy;
	int	i;
	
	i = 0;
	if(!(cpy = malloc(sizeof(char) * ft_strlen(c) + 1)))
		return (0);
	while(c[i])
	{
		cpy[i] = c[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
