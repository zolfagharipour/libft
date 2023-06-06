#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (*lst == NULL)
		*lst = new;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}