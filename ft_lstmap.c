#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *result;

	while (lst->next != NULL)
	{
		if (!(result = (t_list*)malloc(sizeof (t_list))))
			return (NULL);
		result = f(lst);
		lst = lst->next;
	}
	return (lst);
}
