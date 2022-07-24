/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_to_nineteen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:04:42 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 22:09:08 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/zero_to_nineteen.h"

static struct s_array	g_zero_to_nineteen = {.arr = NULL, .size = 0};

void	add_zero_to_nineteen(char *ptr)
{
	s_array_add(&g_zero_to_nineteen, ptr);
}

char	*get_zero_to_nineteen(t_size index)
{
	if (index >= g_zero_to_nineteen.size)
		return (NULL);
	else
		return g_zero_to_nineteen.arr[index];
}

t_bool	is_zero_to_nineteen(char *line)
{
	t_size	i;

	i = 0;
	while (is_digit(line[i]))
		++i;
	if (i > 2)
		return (FALSE);
	if (ft_atoi(line, 2) >= 0 && ft_atoi(line, 2) < 20)
		return (TRUE);
	else
		return (FALSE);
}

void	free_zero_to_nineteen()
{
	s_array_secure_free(g_zero_to_nineteen, 1);
}
