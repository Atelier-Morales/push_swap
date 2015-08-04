#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = ft_memalloc(size + 1);
	if (str)
	{
		ft_bzero(str, size + 1);
	}
	return (str);
}
