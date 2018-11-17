/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 15:33:23 by tcillard          #+#    #+#             */
/*   Updated: 2018/11/17 15:50:51 by tcillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *result;
	t_list *tmp;

	if (!lst && !(*f))
		return (NULL);
	result = (*f)(lst);
	tmp = result;
	while (lst->next != NULL && f)
	{
		result = result->next;
		lst = lst->next;
		result = (*f)(lst);
	}
	return (tmp);
}
