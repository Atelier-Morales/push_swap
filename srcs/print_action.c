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

void	print_action(char *str, t_list *list_a, t_list *list_b)
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
