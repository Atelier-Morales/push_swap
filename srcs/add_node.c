#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"


void        addnode(t_list **l, t_pile **s, int nb)
{
    if (*s == NULL)
    {
        *s = (t_pile *)malloc(sizeof(t_pile));
        if (*s)
        {
            (*s)->nb = nb;
            (*s)->next = NULL;
            if ((*l)->last == NULL)
            {
                (*s)->prev = NULL;
                (*l)->first = (*s);
                (*l)->last = (*s);
            }
            else
            {
            	printf("list->last->nb: %d\n", (*l)->last->nb);
                (*s)->prev = (*l)->last;
                printf("s->prev->nb: %d\n", (*s)->prev->nb);
                (*l)->last->next = (*s);
                (*l)->last = (*s);
            }
            (*l)->len--;
        }
    }
    else
        addnode(&(*l), &((*s)->next), nb);
}

t_list	*append_to_list(t_list *list, int nb)
{
	t_pile	*node;

	if (list != NULL)
	{
		node = (t_pile *)malloc(sizeof(t_pile));
		if (node != NULL)
		{
			node->nb = nb;
			node->next = NULL;
			if (list->last == NULL)
			{
				node->prev = NULL;
				list->first = node;
				list->last = node;
			}
			else
			{
				node->prev = list->last;
				list->last->next = node;
				list->last = node;
			}
			list->len++;
		}
	}
	return (list);
}