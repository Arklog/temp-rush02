/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:46:32 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 04:01:49 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H
# define TRUE	1
# define FALSE	0
# include <stdlib.h>

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

void	s_array_add(struct s_array *arr, char *str);

void	s_array_secure_free(struct s_array *arr);

#endif
