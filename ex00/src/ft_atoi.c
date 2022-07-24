#include "include/types.h"
#include "include/std_func.h"

int	ft_atoi(char *str, int size)
{
	int	i;
	int	sign;
	int	res;

	sign = 1;
	i = 0;
	while(str[i] && str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		sign = (-2 * (str[i++] == '-') + 1);
	res = 0;
	while(str[i] && (str[i] >= '0' && str[i] <= '9') && size > 0)
	{
		res = res * 10 + str[i] - '0';
		i++;
		size--;
	}
	return (res * sign);
}

struct s_arrint	*alloc_arrint(int *tab, t_size size)
{
	struct s_arrint	*arr;
	arr = malloc(sizeof(arr));
	arr->arr = tab;
	arr->size = size;
	if (tab[0] < 0)
	{
		arr->neg = 1;
		tab[0] *= -1;
	}
	else
		arr->neg = 0;
	return (arr);
}

struct s_arrint	*put_in_tab(char *line)
{
	int		*tab;
	int		i;
	int		len;
	char	*offset;

	len = ft_strlen(line);
	tab  = malloc(sizeof(int) * (len / 3 + (len % 3 != 0)));
	i = 0;
	if (len % 3 != 0)
		tab[i++] = ft_atoi(line, len % 3);
	offset = line + len % 3;
	while (*offset)
	{
		tab[i++] = ft_atoi(offset, 3);
		offset += 3;
	}
	return (alloc_arrint(tab, len / 3 + (len % 3 != 0)));
}
