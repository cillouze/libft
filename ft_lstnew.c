/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 15:34:40 by tcillard          #+#    #+#             */
/*   Updated: 2018/11/17 16:54:01 by tcillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	if (!(lst = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(content && content_size))
	{
		lst->content = NULL;
		lst->content_size = 0;
	}
	if (!(lst->content = (t_list*)malloc(sizeof(void*) * content_size)))
		return (0);
	lst->content = (void*)content;
	lst->content_size = content_size;
	lst->next = NULL;
	return (lst);
}
