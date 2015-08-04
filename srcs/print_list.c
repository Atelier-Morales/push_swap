#include "push_swap.h"

void		print_list(t_list *list)
{
	t_pile	*tmp;

	if (list != NULL)
	{
		tmp = list->first;
		while (tmp != NULL)
		{
			ft_putnbr(tmp->nb);
			if (tmp->next != NULL)
				ft_putstr(" > ");
			tmp = tmp->next;
		}
	}
	ft_putstr("\n");
}