#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;

	while (*alst)
	{
		lst = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
		*alst = lst;
	}
	*alst = NULL;
}
