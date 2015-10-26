/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 10:59:25 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/26 13:47:52 by fmorales         ###   ########.fr       */
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
	int 	check;

	buf = list->first;
	check = buf->nb > buf->next->nb ? 1 : 0;
	buf = buf->next;
	while (buf->next)
	{
		if (buf->nb > buf->next->nb)
			return (0);
		buf = buf->next;
	}
	return (check);
}

int			treat_case(t_list *list)
{
	/* case 1 = 3 dans l'ordre inverse -> ra sa
	 * case 2 = 2 premiers elements inverse -> sa
	 * case 3 = 2 derniers element inverse -> rra, rra, sa, ra, ra */

	if (case_1(list) == 1)
	{
		rotate(list);
		ft_putstr("ra ");
		sa(list);
		if (list->first->next == NULL)
			ft_putstr("\n");
		else
			ft_putstr(" ");
		return (1);
	}
	else if (case_2(list) == 1)
	{
		sa(list);
		ft_putstr("\n");
		return (1);
	}
	return (0);
}
