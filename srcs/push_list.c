/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 13:28:12 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/01 19:06:27 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

static int	verify_list(t_list *list)
{
	if (list == NULL || list->first == NULL)
		return (0);
	return (1);
}

void		p(t_list *dest, t_list *src)
{
	list_prepend(dest, src->first->nb);
	list_del(src, src->first);
}

void		pa(t_list *l_a, t_list *l_b)
{
	if (verify_list(l_b))
	{
		if (l_b->first->next == NULL)
		{
			p(l_a, l_b);
			if (l_a->flags->last == 1)
				print_action("\x1b[32mpa\x1b[0m", l_a, l_b);
			else
				print_action("pa", l_a, l_b);
		}
		else
		{
			p(l_a, l_b);
			print_action("pa ", l_a, l_b);
		}
	}
}

void		pb(t_list *l_a, t_list *l_b)
{
	if (verify_list(l_a))
		p(l_b, l_a);
}
