/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twenty_to_hundred.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:32:08 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 04:02:52 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/twenty_to_hundred.h"

static struct s_array	g_twenty_to_hundred = {.arr = NULL, .size = 0};

void	add_twenty_to_hundred(char *str)
{
	s_array_add(&g_twenty_to_hundred, str);
}

char	*get_twenty_to_hundred(t_size i)
{
	if (i < g_twenty_to_hundred.size)
		return (g_twenty_to_hundred.arr[i]);
	else
		return (NULL);
}

t_bool	is_twenty_to_hundred(char *str)
{
	char	a;
	char	b[2];

	if (!ft_strncmp("100", str, 3))
		return 1;
	a = '1';
	b[1] = '0';
	while (a <= '9')
	{
		b[0] = a;
		if (!ft_strncmp((char *)b, str, 2))
			return 1;
	}
	return (0);
}
