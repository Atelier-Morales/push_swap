/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 11:12:20 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/27 12:48:26 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		print_list(t_list *list)
{
	t_pile	*test;

	test = list->first;
	if (list != NULL)
	{
		while (test)
		{
			ft_putnbr(test->nb);
			if (test->next != NULL)
				ft_putstr(" -> ");
			test = test->next;
		}
	}
	ft_putstr("\n");
}
