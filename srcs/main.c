#include "../includes/push_swap.h"

int     main(int ac, char **av) 
{
    t_list	*pileA;
    t_list  *pileB;
    int		len;

    pileA = pileB = NULL;
    len = ac -1;
    if (ac < 2)
    {
    	ft_putstr("Error!\n");
    	return (0);
    }
    pileA = create_pile(len, av + 1);
    initialize_list(&pileB, len);
    if (pileA)
    	print_list(pileA);
    return (0);
}