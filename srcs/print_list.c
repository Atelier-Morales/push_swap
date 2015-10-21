/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 11:12:20 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/21 11:12:22 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		print_list(t_list *list)
{
	if (list != NULL)
	{
		while (list->first)
		{
			ft_putnbr(list->first->nb);
			if (list->first->next != NULL)
				ft_putstr(" -> ");
			list->first = list->first->next;
		}
	}
	ft_putstr("\n");
}
