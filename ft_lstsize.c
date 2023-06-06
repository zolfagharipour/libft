#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	if (lst->next)
		return (ft_lstsize(lst->next) + 1);
	else
		return (1);
}