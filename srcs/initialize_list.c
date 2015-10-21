/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 11:11:37 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/21 12:02:00 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	initialize_list(t_list **list)
{
	*list = (t_list *)malloc(sizeof(t_list));
	if (*list != NULL)
	{
		(*list)->len = 0;
		(*list)->first = NULL;
		(*list)->last = NULL;
	}
}
