#include "push_swap.h"

int 	check_int_format(char *str)
{
	if (ft_strlen(str) != ft_strlen(ft_itoa(ft_atoi(str))))
		return (0);
	return (1);
}