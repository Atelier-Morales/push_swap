#include <stdio.h>
#include "push_swap.h"
/*
void	print_list(t_pile *pile)
{
	while (pile)
	{
		printf("%d\n", pile->nb);
		pile = pile->next;
	}
}*/

void		print_list(t_list *list)
{
	t_pile	*tmp;

	if (list != NULL)
	{
		tmp = list->first;
		while (tmp != NULL)
		{
			ft_putnbr(tmp->nb);
			ft_putstr(" > ");
			tmp = tmp->next;
		}
	}
	ft_putstr("NULL\n");
}