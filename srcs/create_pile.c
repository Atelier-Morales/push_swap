#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

static void    initialize_list(t_list **list, int len)
{
    *list = (t_list *)malloc(sizeof(t_list));
    if (*list != NULL)
    {
        (*list)->len = len;
        (*list)->first = NULL;
        (*list)->last = NULL;
    }
}

t_list  *create_pile(int len, char **av)
{
    t_list *buf;
	t_pile *pile;
	int    i;

    pile = NULL;
	initialize_list(&buf, len);
	i = 0;
	while (i < len)
    {
    	if (is_int(av[i]) == 1)
            addnode(&buf, &pile, ft_atoi(av[i]));
    	else
    	{
    		ft_putstr("Error!\n");
    		return (NULL);
    	}
    	++i;
    }
    if (check_double(pile, len) == 0 || check_int_format(pile) == 0)
        return (NULL);
    return (buf);
}