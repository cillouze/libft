#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	if (!(lst = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		lst->content = NULL;
		lst->content_size = 0;
	}
	else
	{
		lst->content = (void*)content;
		lst->content_size = content_size;
		lst->next = NULL;
	}
	return (lst);
}
