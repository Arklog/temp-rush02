# include <unistd.h>
# include "include/std_func.h"

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}
