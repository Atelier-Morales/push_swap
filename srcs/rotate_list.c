/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 11:12:58 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/21 11:13:01 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	rotate(t_list *list)
{
	append_to_list(list, list->first->nb);
	list_del(list, list->first);
}

void	rotate_list(t_list *list)
{
	t_pile	*node;
	int		tmp;

	tmp = list->first->nb;
	node = list->first;
	while (node)
	{
		if (node->nb < tmp)
			tmp = node->nb;
		node = node->next;
	}
	while (list->first->nb != tmp)
	{
		rotate(list);
		ft_putstr("ra ");
	}
}
