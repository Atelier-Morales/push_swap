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

typedef struct		s_list
{
	int 			len;
	t_pile			*first;
	t_pile			*last;
}					t_list;

void        addnode(t_list **l, t_pile **s, int nb);
void		print_list(t_list *list);
t_list  	*create_pile(int len, char **av);
int			is_int(char *str);
int			check_double(t_pile *pile, int len);
int			check_int_format(t_pile *pile);
void    	initialize_list(t_list **list, int len);

#endif