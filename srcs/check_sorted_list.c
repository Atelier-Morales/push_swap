#include "push_swap.h"

int			check_sorted_list(t_list *list, t_pile *test)
{

	if (list->first->nb == list->last->nb)
		return (1);
	while (test->next)
	{
		if (test->nb > test->next->nb)
			return (0);
		test = test->next;
	}
	return (1);
}