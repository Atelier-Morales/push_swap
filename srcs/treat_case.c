/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 10:59:25 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/30 16:34:27 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/push_swap.h"
#include "../libft/libft.h"

static int	case_1(t_list *list)
{
	t_pile	*buf;

	buf = list->first;
	while (buf->next)
	{
		if (buf->nb < buf->next->nb)
			return (0);
		buf = buf->next;
	}
	return (1);
}

static int	case_2(t_list *list)
{
	t_pile	*buf;
	int		check;
	int		nb;

	buf = list->first;
	nb = buf->nb;
	check = nb > buf->next->nb ? 1 : 0;
	buf = buf->next;
	buf = buf->next;
	if (check_sorted_list(list, buf) != 1)
		return (0);
	return (check);
}

static int	case_3(t_list *list)
{
	t_pile	*buf;

	buf = list->first;
	while (buf->next)
	{
		if (buf->next->next == NULL && buf->nb > buf->next->nb && buf->prev->nb < buf->next->nb) 
			return (1);
		else if (buf->nb > buf->next->nb)
			return (0);
		buf = buf->next;
	}
	return (0);
}

/* case 3 = 2 derniers elements inverse -> rra, rra, sa, ra, ra */

int			treat_case(t_list *list)
{
	if (case_1(list) == 1)
	{
		rotate(list);
		ft_putstr("ra ");
		sa(list);
		if (list->first->next != NULL)
			ft_putstr(" ");
		return (1);
	}
	else if (case_2(list) == 1)
	{
		sa(list);
		if (list->first->next != NULL)
			ft_putstr(" ");
		return (1);
	}
	else if (case_3(list) == 1)
	{
		reverse_rotate(list);
		reverse_rotate(list);
		ft_putstr("rra rra ");
		sa(list);
		ft_putstr(" ");
		rotate(list);
		rotate(list);
		ft_putstr("ra ra ");
		return (1);
	}
	return (0);
}
