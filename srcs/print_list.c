#include "push_swap.h"

void		print_list(t_list *list)
{
	if (list != NULL)
	{
		while (list->first)
		{
			ft_putnbr(list->first->nb);
			if (list->first->next != NULL)
				ft_putstr(" -> ");
			list->first = list->first->next;
		}
	}
	ft_putstr("\n");
}