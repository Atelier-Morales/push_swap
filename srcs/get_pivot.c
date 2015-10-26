/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pivot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 12:34:58 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/26 13:41:06 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

int	get_pivot(t_list *list)
{
	t_pile	*buf;
	int 	pivot;

	buf = list->first;
	while (buf->next)
		buf = buf->next;
	pivot = buf->nb;
	return (pivot);
}

int	get_len(t_list *list)
{
	t_pile	*node;
	int		len;

	len = 0;
	node = list->first;
	while (node)
	{
		len++;
		node = node->next;
	}
	return (len);
}
