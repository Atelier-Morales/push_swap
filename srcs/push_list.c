/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 13:28:12 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/21 14:07:45 by fmorales         ###   ########.fr       */
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

void		p(t_list *l_a, t_list *l_b)
{
	list_prepend(l_a, l_b->first->nb);
	list_del(l_b, l_b->first);
}

void		pa(t_list *l_a, t_list *l_b)
{
	if (verify_list(l_b))
	{
		p(l_a, l_b);
		ft_putstr("pa");
	}
}

void		pb(t_list *l_a, t_list *l_b)
{
	if (verify_list(l_a))
	{
		p(l_b, l_a);
		ft_putstr("pb");
	}
}
