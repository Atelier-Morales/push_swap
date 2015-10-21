/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 11:12:03 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/21 11:12:06 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    initialize_list(&pileB);
    if (pileA)
    {
        push_swap(pileA, pileB);
    	print_list(pileA);
    }
    return (0);
}
