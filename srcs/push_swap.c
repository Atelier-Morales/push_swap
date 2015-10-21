/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 11:12:33 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/21 14:08:53 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

t_list	*list_prepend(t_list *list, int value)
{
	t_pile	*node;

	if (list != NULL)
	{
		node = (t_pile *)malloc(sizeof(t_pile));
		if (node != NULL)
		{
			node->nb = value;
			node->prev = NULL;
			if (list->first == NULL)
			{
				node->next = NULL;
				list->first = node;
				list->last = node;
			}
			else
			{
				list->first->prev = node;
				node->next = list->first;
				list->first = node;
			}
			list->len++;
		}
	}
	return (list);
}

void		push_swap(t_list *a, t_list *b)
{
	t_pile	*test;

	test = a->first;
	if (check_sorted_list(a, test) == 1)
		return ;
	while (a->first)
	{
		rotate_list(a);
		pb(a, b);
		ft_putchar(' ');
	}
	while (b->first)
	{
		if (b->first->next == NULL)
		{
			pa(a, b);
			ft_putchar('\n');
		}
		else
		{
			pa(a, b);
			ft_putchar(' ');
		}
	}
}
