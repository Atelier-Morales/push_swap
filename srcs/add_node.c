/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 11:08:28 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/21 14:40:04 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

t_list	*add_node(t_list *l, int nb)
{
	t_pile *node;

	if (l != NULL)
	{
		node = (t_pile *)malloc(sizeof(t_pile));
		if (node != NULL)
		{
			node->nb = nb;
			node->next = NULL;
			if (l->last == NULL)
			{
				node->prev = NULL;
				l->first = node;
				l->last = node;
			}
			else
			{
				node->prev = l->last;
				l->last->next = node;
				l->last = node;
			}
			l->len--;
		}
	}
	return (l);
}
