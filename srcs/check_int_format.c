/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_int_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 11:09:16 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/21 11:58:03 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_int_format(char *str)
{
	if (ft_strlen(str) != ft_strlen(ft_itoa(ft_atoi(str))))
		return (0);
	return (1);
}
