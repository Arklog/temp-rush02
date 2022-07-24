/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_func.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:49:17 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 04:04:58 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STD_FUNC_H
# define STD_FUNC_H
# include "include/types.h"
# include "include/memfunc.h"

t_size	ft_strlen(char *str);

int	ft_strncmp(char *s1, char *s2, t_size n);

t_bool	is_digit(char a);

t_bool	is_printable(char a);

void	ft_append(char **ptr, char val);

#endif
