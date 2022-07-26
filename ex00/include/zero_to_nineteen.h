/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_to_nineteen.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:59:08 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 22:10:57 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZERO_TO_NINETEEN_H
# define ZERO_TO_NINETEEN_H
# include "include/types.h"
# include "include/std_func.h"

void	add_zero_to_nineteen(char *ptr);

char	*get_zero_to_nineteen(t_size index);

t_bool	is_zero_to_nineteen(char *);

void	free_zero_to_nineteen();

#endif
