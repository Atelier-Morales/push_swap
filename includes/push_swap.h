/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 13:13:52 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/01 19:18:20 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <string.h>
# include "../libft/libft.h"

typedef struct		s_pile
{
	int				nb;
	struct s_pile	*prev;
	struct s_pile	*next;
}					t_pile;

typedef struct		s_flags
{
	int				print;
	int				last;
	int				each;
	int				options;
}					t_flags;

typedef struct		s_list
{
	int				len;
	t_pile			*first;
	t_pile			*last;
	t_flags			*flags;
}					t_list;

void				print_list(t_list *list);
t_list				*create_pile(int len, char **av);
int					is_int(char *str);
int					check_double(t_pile *pile, int len);
int					check_int_format(char *str);
void				initialize_list(t_list **list);
void				push_swap(t_list *a, t_list *b);
int					check_sorted_list(t_list *list, t_pile *test);
void				rotate_list(t_list *list, t_list *list_b);
t_list				*list_append(t_list *list, int value);
t_list				*add_node(t_list *l, int nb);
t_list				*list_del(t_list *list, t_pile *node);
t_list				*list_prepend(t_list *list, int value);
void				rotate(t_list *list);
void				reverse_rotate(t_list *list);
void				sa(t_list *list, t_list *list_b);
void				p(t_list *dest, t_list *src);
void				pa(t_list *l_a, t_list *l_b);
void				pb(t_list *l_a, t_list *l_b);
t_flags				*check_flags(char **str);
int					treat_case(t_list *list, t_list *list_b);
int					get_pivot(t_list *list);
int					get_len(t_list *list);
void				print_action(char *str, t_list *list_a, t_list *list_b);

#endif
