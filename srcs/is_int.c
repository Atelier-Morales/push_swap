#include "push_swap.h"
#include <stdio.h>

static int	test_sign(const char *str, int i)
{
	if ((!(str[i] >= '0' && str[i] <= '9')) && str[i] != '-'
			&& str[i] != '\n' && str[i] != '\v' && str[i] != '\t'
			&& str[i] != '\r' && str[i] != '\f' && str[i] != '+'
			&& str[i] != ' ')
		return (0);
	return (1);
}

int			is_int(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] < '0' || str[i] > '9')
	{
		if (test_sign(str, i) == 0)
			return (0);
		i++;
	}
	while (i < ft_strlen(str))
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		++i;
	}
	return (1);
}