#include "libft.h"

int	main()
{
	t_list	*head = NULL;
	t_list	*current =NULL;

	head = ft_lstnew((void *)"Erdapfel");
	current = ft_lstnew("Milch");
	ft_lstadd_front(&head, current);
	current = ft_lstnew("Brot");
	ft_lstadd_back(&head, current);
	printf("Last: %s\n", (char *)ft_lstlast(head)->content);
	printf("Size: %d\n\n", ft_lstsize(head));
	while (head != NULL)
	{
		printf("--%s\n", (char *)head->content);
		head = head->next;
	}
	return (0);
	
}