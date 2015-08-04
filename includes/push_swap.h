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

void		addnode(t_pile **s, int nb);
void		print_list(t_pile *pile);
t_pile		*create_pile(int len, char **av);
int			is_int(char *str);
int			check_double(t_pile *pile, int len);

#endif