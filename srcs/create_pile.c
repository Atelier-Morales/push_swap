/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_pile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 11:11:07 by fmorales          #+#    #+#             */
/*   Updated: 2015/10/21 14:34:27 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_list	*create_pile(int len, char **av)
{
	t_list	*buf;
	int		i;

	initialize_list(&buf);
	i = 0;
	while (i < len)
	{
		if (is_int(av[i]) == 1)
			buf = add_node(buf, ft_atoi(av[i]));
		else
		{
			ft_putstr("Error!\n");
			return (NULL);
		}
		++i;
	}
	if (check_double(buf->first, len) == 0)
	{
		ft_putstr("Error!\n");
		return (NULL);
	}
	return (buf);
}
