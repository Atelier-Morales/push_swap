#include "push_swap.h"
#include <stdlib.h>

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