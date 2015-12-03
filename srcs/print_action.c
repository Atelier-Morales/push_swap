/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_action.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 18:32:44 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/01 19:03:30 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

void		print_action(char *str, t_list *list_a, t_list *list_b)
{
	ft_putstr(str);
	if (list_a->flags->each == 1)
	{
		ft_putstr("\na: ");
		print_list(list_a);
		ft_putstr("b: ");
		print_list(list_b);
		ft_putstr("\n");
	}
}

void		print_actions(t_list *list, t_list *list_b, char *str)
{
	if (list_b->first == NULL && check_sorted_list(list, list->first) == 1)
	{
		if (list->flags->last == 1)
			str = ft_strjoin(ft_strjoin("\x1b[32m", str), "\x1b[0m");
		print_action(str, list, list_b);
	}
	else
	{
		print_action(ft_strjoin(str, " "), list, list_b);
	}
}
