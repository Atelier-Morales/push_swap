/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 09:56:11 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/01 17:51:07 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"
#include <stdlib.h>

static void		initialize_flag(t_flags **flags)
{
	*flags = (t_flags *)malloc(sizeof(t_flags));
	if (*flags != NULL)
	{
		(*flags)->options = 1;
		(*flags)->print = 0;
		(*flags)->last = 0;
		(*flags)->each = 0;
	}
}

static t_flags	*set_flag(t_flags *flags, char *str)
{
	if (ft_strcmp(str, "-p") == 0)
		flags->print = 1;
	else if (ft_strcmp(str, "-v") == 0)
		flags->each = 1;
	else if (ft_strcmp(str, "-c") == 0)
		flags->last = 1;
	flags->options++;
	return (flags);
}

t_flags			*check_flags(char **str)
{
	int		i;
	t_flags	*flags;

	i = 0;
	initialize_flag(&flags);
	while (str[i])
	{
		if (ft_strcmp(str[i], "-p") == 0 || ft_strcmp(str[i], "-c") == 0 ||\
				ft_strcmp(str[i], "-v") == 0)
			set_flag(flags, str[i]);
		else
			break ;
		++i;
	}
	return (flags);
}
