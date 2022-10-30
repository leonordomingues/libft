#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	
	if (lst && del)
	{
		while (*lst != NULL)
		{
			temp = (*lst)->next;
			del((*lst)->content);
			free (*lst);
			*lst = temp;
		}
	}
}
