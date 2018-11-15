/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:06:30 by tcillard          #+#    #+#             */
/*   Updated: 2018/11/07 18:08:00 by tcillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t i;

	i = 0;
	while(s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}
