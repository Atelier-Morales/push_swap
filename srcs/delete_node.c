/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 11:11:20 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/21 11:11:23 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_list		*list_del(t_list *list, t_pile *node)
{
	if (!node->next && !node->prev)
	{
		list->first = NULL;
		list->last = NULL;
	}
	else if (!node->prev)
	{
		list->first = node->next;
		list->first->prev = NULL;
	}
	else if (!node->next)
	{
		list->last = node->prev;
		list->last->next = NULL;
	}
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}
	free(node);
	node = NULL;
	list->len--;
	return (list);
}
