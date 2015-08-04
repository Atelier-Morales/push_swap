#include "push_swap.h"
#include <stdio.h>

static int	check_list(int *table, int check, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (table[i] == check) 
		{
			ft_putstr("Error!\n");
			return (0);
		}
		++i;
	}
	return (1);
}

int			check_double(t_pile *pile, int len)
{
	int	table[len];
	int i;
	int check;

	i = 0;
	while (pile)
	{
		table[i] = pile->nb;
		++i;
		pile = pile->next;
	}
	while (i > 0)
	{
		check = table[i];
		if (check_list(table, check, i) == 0)
			return (0);
		--i;
	}
	return (1);
}