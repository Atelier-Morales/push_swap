#include <stdlib.h>
#include "push_swap.h"

static int		verif(t_list *list)
{
	if (list == NULL || list->first == NULL || list->first->next == NULL)
		return (0);
	return (1);
}

static void		s(t_list *list)
{
	t_pile	*node;

	node = list->first;
	list->first = node->next;
	list->first->prev = NULL;
	node->prev = list->first;
	node->next = list->first->next;
	list->first->next = node;
	node->next->prev = node;
}

void			sa(t_list *list)
{
	if (verif(list))
	{
		s(list);
		ft_putstr("sa");
	}
}

void			sb(t_list *list)
{
	if (verif(list))
	{
		s(list);
		ft_putstr("sb");
	}
}

void			ss(t_list *l_a, t_list *l_b)
{
	if (verif(l_a) && verif(l_b))
	{
		s(l_a);
		s(l_b);
		ft_putstr("ss");
	}
}