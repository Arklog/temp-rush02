/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pow_1000.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:42:03 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/23 18:04:03 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POW_1000_H
# define POW_1000_H
# include  "types.h"

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
 * @return the corresponding power of 1000 as a string (1 should return "thousand")
 */
char	*get_pow_1000(t_size pow);

#endif
