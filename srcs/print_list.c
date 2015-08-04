#include <stdio.h>
#include "push_swap.h"

void	print_list(t_pile *pile)
{
	while (pile)
	{
		printf("%d\n", pile->nb);
		pile = pile->next;
	}
}