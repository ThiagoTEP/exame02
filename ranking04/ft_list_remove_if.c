#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *curr = (*begin_list);
	while(curr)
	{
		if (cmp(data_ref, curr->data))
			free(curr->data);
		curr = curr ->next;
	}
}