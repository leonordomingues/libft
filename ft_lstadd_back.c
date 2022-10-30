#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
	{
		ft_lstadd_front(lst, new);
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}
