#include "push_swap.h"
#include <stdlib.h>

t_list		*list_del(t_list *list, t_pile *node)
{
	if (!node->next && !node->prev)
	{
		list->first = NULL;
		list->last = NULL;
	}
	else if (!node->prev)
	{
		list->first = node->next;
		list->first->prev = NULL;
	}
	else if (!node->next)
	{
		list->last = node->prev;
		list->last->next = NULL;
	}
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}
	free(node);
	node = NULL;
	list->len--;
	return (list);
}