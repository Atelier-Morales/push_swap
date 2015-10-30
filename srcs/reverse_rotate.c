/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 16:04:14 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/30 16:22:37 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	reverse_rotate(t_list *list)
{
	t_pile	*buf;
	int		tmp;

	tmp = 0;
	buf = list->first;
	while (buf)
	{
		if (buf->next == NULL)
		{
			tmp = buf->nb;
			break;
		}
		buf = buf->next;
	}
	list_prepend(list, tmp);
	list_del(list, list->last);
}
