/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pow_1000.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:42:03 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 22:10:17 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POW_1000_H
# define POW_1000_H
# include <stdlib.h>
# include "include/types.h"
# include "include/std_func.h"

/**
 * Add a string to the list of power of 1000
 *
 * @param str The string to add
 */
void	add_pow_1000(char *str);

/**
 * Return the string corresponding to the given power of 1000
 *
 * @param pow The power of 1000
 *
 * @return the corresponding power of 1000 as a string 
 *			(1 should return "thousand"), if no power 
 *			is found return NULL
 */
char	*get_pow_1000(t_size pow);

/**
 * Check if a given string is a power of 1000 in the dic format
 *
 * @param ptr The dic's line
 * @param pow A ptr to store the power of 1000
 *
 * @return 1 if true, 0 else
 */
t_bool	is_pow_1000(char *ptr);

void	free_pow_1000();

#endif
