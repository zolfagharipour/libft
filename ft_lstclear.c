#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;


	while (*lst != 0)
	{
		tmp = (*lst)->next;
		del ((*lst)->content);
		free (*lst);
		*lst = tmp;
	}
	*lst = 0;
}
