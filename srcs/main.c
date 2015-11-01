/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 11:12:03 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/01 19:36:04 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*pile_a;
	t_list	*pile_b;
	t_flags	*flags;

	pile_a = NULL;
	pile_b = NULL;
	flags = NULL;
	if (ac < 2)
		return (0);
	flags = check_flags(av + 1);
	pile_a = create_pile(ac - flags->options, av + flags->options);
	initialize_list(&pile_b);
	if (pile_a)
	{
		pile_a->flags = flags;
		push_swap(pile_a, pile_b);
		ft_putstr("\n");
		if (flags->print == 1)
			print_list(pile_a);
	}
	return (0);
}
