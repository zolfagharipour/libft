#include "libft.h"

void print_content(void *content)
{
    printf("--%s\n", (char *)content);
}

void	del_content(void *content)
{
	free(content);
}




int	main()
{
	t_list	*head = NULL;
	t_list	*current = NULL;
	
	head = ft_lstnew((void *)"Erdapfel");
	current = ft_lstnew("Milch");
	ft_lstadd_front(&head, current);
	current = ft_lstnew("Brot");
	ft_lstadd_back(&head, current);
	printf("Last: %s\n", (char *)ft_lstlast(head)->content);
	printf("Size: %d\n\n", ft_lstsize(head));

	ft_lstiter(head, print_content);
	ft_lstdelone(current, del_content);
	ft_lstclear(&current, del_content);
	while (head != NULL)
	{
		printf("--%s\n", (char *)head->content);
		head = head->next;
	}
	return (0);
	
}

//cc listmain.c ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c ft_lstnew.c ft_lstsize.c  ft_lstiter.c ft_lstdelone.c ft_lstclear.c