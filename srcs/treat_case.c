/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 10:59:25 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/01 20:10:45 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/push_swap.h"
#include "../libft/libft.h"

static int	case_1(t_list *list)
{
	t_pile	*buf;
	int		len;

	len = get_len(list);
	if (len > 3)
		return (0);
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
	int		len;

	buf = list->first;
	nb = buf->nb;
	check = nb > buf->next->nb ? 1 : 0;
	len = get_len(list);
	if (len == 3 && nb > buf->next->next->nb)
		return (0);
	buf = buf->next->next;
	while (buf->next)
	{
		if (nb > buf->nb)
			return (0);
		buf = buf->next;
	}
	buf = list->first->next->next;
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
		if (buf->next->next == NULL && buf->nb > buf->next->nb &&\
				buf->prev->nb < buf->next->nb)
			return (1);
		else if (buf->nb > buf->next->nb)
			return (0);
		buf = buf->next;
	}
	return (0);
}

void		treat_case_3(t_list *list, t_list *list_b)
{
	reverse_rotate(list);
	print_action("rra ", list, list_b);
	reverse_rotate(list);
	print_action("rra ", list, list_b);
	sa(list, list_b);
	rotate(list);
	print_action("ra ", list, list_b);
	rotate(list);
	print_actions(list, list_b, "rra");
}

int			treat_case(t_list *list, t_list *list_b)
{
	if (case_1(list) == 1)
	{
		rotate(list);
		print_action("ra ", list, list_b);
		sa(list, list_b);
		return (1);
	}
	else if (case_2(list) == 1)
	{
		sa(list, list_b);
		return (1);
	}
	else if (case_3(list) == 1)
	{
		treat_case_3(list, list_b);
		return (1);
	}
	return (0);
}
