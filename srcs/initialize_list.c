#include "push_swap.h"
#include <stdlib.h>

void    initialize_list(t_list **list, int len)
{
    *list = (t_list *)malloc(sizeof(t_list));
    if (*list != NULL)
    {
        (*list)->len = len;
        (*list)->first = NULL;
        (*list)->last = NULL;
    }
}
