#include "push_swap.h"
#include <stdio.h>

t_pile	*create_pile(int len, char **av)
{
	t_pile	*buf;
	int		i;

	buf = NULL;
	i = 0;
	while (i < len)
    {
    	if (is_int(av[i]) == 1)
            addnode(&buf, ft_atoi(av[i]));
    	else
    	{
    		ft_putstr("Error!\n");
    		return (NULL);
    	}
    	++i;
    }
    if (check_double(buf, len) == 0 || check_int_format(buf, len)
        return (NULL);
    return (buf);
}