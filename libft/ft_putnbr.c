#include <stdlib.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	char	*str;

	str = ft_itoa(n);
	ft_putstr(str);
	free(str);
}
