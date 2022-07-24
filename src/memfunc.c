#include "include/memfunc.h"
# include "include/pow_1000.h"
# include "include/twenty_to_hundred.h"
# include "include/zero_to_nineteen.h"

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

void	s_array_free_all()
{
	free_zero_to_nineteen();
	free_twenty_to_hundred();
	free_pow_1000();
}
