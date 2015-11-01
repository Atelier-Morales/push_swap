/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 11:13:11 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/01 19:32:42 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

static int		verif(t_list *list)
{
	if (list == NULL || list->first == NULL || list->first->next == NULL)
		return (0);
	return (1);
}

static void		s(t_list *list)
{
	t_pile	*node;

	node = list->first;
	list->first = node->next;
	list->first->prev = NULL;
	node->prev = list->first;
	node->next = list->first->next;
	list->first->next = node;
	node->next->prev = node;
}

void			sa(t_list *list, t_list *list_b)
{
	if (verif(list))
		s(list);
	if (list->first->next != NULL)
		print_action("sa ", list, list_b);
	else
		print_action("sa", list, list_b);
}

void			sb(t_list *list)
{
	if (verif(list))
	{
		s(list);
		ft_putstr("sb");
	}
}

void			ss(t_list *l_a, t_list *l_b)
{
	if (verif(l_a) && verif(l_b))
	{
		s(l_a);
		s(l_b);
		ft_putstr("ss");
	}
}
