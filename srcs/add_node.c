#include <stdlib.h>
#include "push_swap.h"

void		addnode(t_pile **s, int nb)
{
	if (*s == NULL)
	{
		*s = (t_pile *)malloc(sizeof(t_pile));
		(*s)->nb = nb;
		(*s)->next = NULL;
	}
	else
		addnode(&((*s)->next), nb);
}