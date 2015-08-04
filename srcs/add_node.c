#include <stdlib.h>
#include "push_swap.h"

void        addnode(t_list **l, t_pile **s, int nb)
{
    if (*s == NULL)
    {
        *s = (t_pile *)malloc(sizeof(t_pile));
        if (*s != NULL)
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
                (*s)->prev = (*l)->last;
                (*l)->last->next = (*s);
                (*l)->last = (*s);
            }
        }
    }
    else
        addnode(&(*l), &((*s)->next), nb);
}