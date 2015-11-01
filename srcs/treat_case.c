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
	if (nb > buf->next->nb)
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
	if (list_b->first == NULL)
	{
		if (list->flags->last == 1)
			print_action("\x1b[32mra\x1b[0m", list, list_b);
		else
			print_action("ra", list, list_b);
	}
	else
		print_action("ra ", list, list_b);
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
