#include "push_swap.h"
#include <stdlib.h>

void    initialize_list(t_list **list)
{
    *list = (t_list *)malloc(sizeof(t_list));
    if (*list != NULL)
    {
        (*list)->len = 0;
        (*list)->first = NULL;
        (*list)->last = NULL;
    }
}
