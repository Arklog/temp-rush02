/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twenty_to_hundred.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:52:12 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 22:10:37 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TWENTY_TO_HUNDRED_H
# define TWENTY_TO_HUNDRED_H
# include <stdlib.h>
# include "include/types.h"
# include "include/std_func.h"

/**
 * Append a string to the list of multiples of 10 between 20 and 100
 *
 * @param str The string to add
 */
void	add_twenty_to_hundred(char *str);

/**
 * Get the string corresponding to the multiple of ten between 20 and 100
 *
 * @param index the index
 *
 * @return The string corresponding to the index, or NULL if none found
 */
char	*get_twenty_to_hundred(t_size index);

/**
 * Check if a line from the dic correspond to a multiple of 10 between
 * 20 and 100
 *
 * @param str The line to check
 * @param index A place to store the index, or NULL
 *
 * @return 1 if true, 0 else
 */
t_bool	is_twenty_to_hundred(char str[3]);

void	free_twenty_to_hundred();

#endif
