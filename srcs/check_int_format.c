#include "push_swap.h"

int			check_int_format(t_pile *pile)
{
	while (pile)
	{
		if (pile->nb > 2147483647 || pile->nb <= -2147483648)
			return (0);
		pile = pile->next;
	}
	return (1);
}