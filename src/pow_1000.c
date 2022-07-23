#include "pow_1000.h"

static s_array	pow_1000 = {.arr = NULL, .size = 0};

void	add_pow_1000(char *str)
{
	char	**narr;
	t_size	i;

	narr = malloc(sizeof(char*) * (pow_1000.size + 1));
	if (!narr)
		return ;
	i = 0;
	while (i < pow_1000.size)
	{
		narr[i] = pow_1000.arr[i];
		++i;
	}
	narr[i] = str;
	++pow_1000.size;
}
