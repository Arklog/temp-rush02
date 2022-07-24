#include "include/types.h"

void	s_array_add(struct s_array *arr, char *str)
{
	char	**narr;
	t_size	i;

	narr = malloc(sizeof(char *) * (arr->size + 1));
	if (!narr)
		return ;
	i = 0;
	while (i < arr->size)
	{
		narr[i] = arr->arr[i];
		++i;
	}
	narr[i] = str;
	s_array_secure_free(*arr);
	arr->arr = narr;
	arr->size++;
}

void	s_array_secure_free(struct s_array arr)
{
	t_size	i;

	i = 0;
	while (i < arr.size)
		free(arr.arr[i]);
	if (arr.arr)
		free(arr.arr);
}
