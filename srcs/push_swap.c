/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 11:12:33 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/01 20:13:01 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"

static int	cases(t_list *list, t_list *list_b, t_pile *test)
{
	if (list->len == 3 && treat_case(list, list_b) == 1)
		return (1);
	else if (check_sorted_list(list, test) == 1)
		return (1);
	return (0);
}

t_list		*list_prepend(t_list *list, int value)
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
	if (check_sorted_list(a, test) == 1 || treat_case(a, b) == 1)
		return ;
	while (a->first)
	{
		test = a->first;
		a->len = get_len(a);
		if (cases(a, b, test) == 1)
			break ;
		rotate_list(a, b);
		if (cases(a, b, test) == 1)
			break ;
		pb(a, b);
		print_action("pb ", a, b);
	}
	while (b->first)
		pa(a, b);
}
