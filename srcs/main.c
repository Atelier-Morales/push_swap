/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 11:12:03 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/21 14:52:03 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*pile_a;
	t_list	*pile_b;
	int		len;

	pile_a = NULL;
	pile_b = NULL;
	len = ac - 1;
	if (ac < 2)
		return (0);
	pile_a = create_pile(len, av + 1);
	initialize_list(&pile_b);
	if (pile_a)
	{
		push_swap(pile_a, pile_b);
		//print_list(pile_a);
	}
	return (0);
}
