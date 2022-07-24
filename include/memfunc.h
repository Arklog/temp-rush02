#ifndef MEMFUNC_H
# define MEMFUNC_H
# include <stdlib.h>
# include "include/types.h"

/**
 * Set a range of memory starting at ptr to ptr + len at given value
 *
 * @param ptr the starting position
 * @param val the value to set
 * @param nbytes number of bytes to set
 */
void	ft_memset(void *ptr, char val, t_size nbytes);

/**
 * Copy a range of memory from src to dest
 *
 * @param dest the destination buffer
 * @param src the source buffer
 * @param len number of bytes to copy
 */
void	ft_memcpy(void *dest, void *src, t_size len);

#endif
