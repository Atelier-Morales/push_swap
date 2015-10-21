/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 11:08:54 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/21 11:42:35 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_list(int *table, int check, int pos, int len)
{
	int	i;

	i = pos + 1;
	if (i == len)
		return (1);
	while (i < len)
	{
		if (table[i] == check)
			return (0);
		++i;
	}
	return (1);
}

int			check_double(t_pile *pile, int len)
{
	int	table[len];
	int i;
	int check;

	i = 0;
	while (pile)
	{
		table[i] = pile->nb;
		++i;
		pile = pile->next;
	}
	i = 0;
	while (i < len)
	{
		check = table[i];
		if (check_list(table, check, i, len) == 0)
			return (0);
		++i;
	}
	return (1);
}
