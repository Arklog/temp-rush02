#include "include/memfunc.h"

void	ft_memset(void *dest, char val, t_size nbytes)
{
	t_size i;

	i = 0;
	while (i < nbytes)
		((char *)dest)[i++] = val;
}

void	ft_memcpy(void *dest, void *src, t_size nbytes)
{
	t_size i;

	i = 0;
	while (i < nbytes)
	{
		((char *)dest)[i] = ((char *)src)[i];
		++i;
	}
}
