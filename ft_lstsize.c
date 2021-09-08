#include "libft.h"

/*
 * Counts the number of elements in a list
 */
int	ft_lstsize(t_list *lst)
{
	t_list	*cur;
	int	size;

	cur = lst;
	size = 0;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return (size);
}
