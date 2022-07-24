/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_to_nineteen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:04:42 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 17:42:50 by pducloux         ###   ########.fr       */
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
	return g_zero_to_nineteen.arr[index];
}

t_bool	is_zero_to_nineteen(char *line)
{
	char	tmp[3];
	t_size	i;

	i = 0;
	while (is_digit(line[i]))
		++i;
	if (i > 2)
		return (FALSE);
	ft_memset(tmp, 0, sizeof(char) * 3);
	ft_memcpy(tmp, line, sizeof(char) * 2);
	if (ft_atoi(tmp, 2) > 0 && ft_atoi(tmp, 2) < 20)
		return (TRUE);
	else
		return (FALSE);
}
