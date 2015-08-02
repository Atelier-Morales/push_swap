#include <stdio.h>

static int	ft_test(const char *str, int i, int *sign)
{
	if ((!(str[i] >= '0' && str[i] <= '9')) && str[i] != '-'
			&& str[i] != '\n' && str[i] != '\v' && str[i] != '\t'
			&& str[i] != '\r' && str[i] != '\f' && str[i] != '+'
			&& str[i] != ' ')
		return (0);
	if (str[i] == '+')
	{
		if (str[i + 1] < '0' || str[i + 1] > '9')
			return (0);
	}
	if (str[i] == '-')
	{
		*sign = -1;
		if (str[i + 1] < '0' || str[i + 1] > '9')
			return (0);
	}
	return (1);
}

int			ft_atoi(const char *str)
{
	unsigned int	i;
	int				sign;
	int				nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] < '0' || str[i] > '9')
	{
		if (ft_test(str, i, &sign) == 0)
			return (0);
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str [i] <= '9'))
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * sign);
}

void    print_tab(int *tab, unsigned int size) 
{
	unsigned int i;
    
    i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        ++i;
    }
    printf("\n\n");
}

int     main(int ac, char **av) {
    int		i;
    int     len;
    int     array[ac -1];
    
    len = ac -1;
    i = 0;
    while (i < len)
    {
    	array[i] = av[i + 1];
    	++i;
    }

    print_tab(array, len);
    return (0);
}