/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:46:32 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 16:48:19 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H
# define TRUE	1
# define FALSE	0
# include <stdlib.h>
# include "include/std_func.h"

typedef unsigned int	t_size;

typedef unsigned char	t_bool;

struct s_dic_line {
	char	*number;
	char	*word;
};

struct s_array {
	char	**arr;
	t_size	size;
};

/**
 * Add an element to the array, securely allocating and freeing memory
 *
 * @param arr The structure in which the data should be added
 * @param str The string to add
 */
void	s_array_add(struct s_array *arr, char *str);

/**
 * Securely free memory from s_array structure
 *
 * @param arr The structure from which memory should be freed
 */
void	s_array_secure_free(struct s_array arr);

#endif
