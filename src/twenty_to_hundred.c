/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twenty_to_hundred.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:32:08 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/23 18:46:22 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "twenty_to_hundred.h"

static s_array	g_twenty_to_hundred = {.arr = NULL, .size = 0};

void	add_twenty_to_hundred(char *str)
{
	char	**narr;
	t_size	i;

	narr = malloc(sizeof(char *) * (g_twenty_to_hundred.size + 1));
	if (!narr)
		return ;
	i = 0;
	while (i < g_twenty_to_hundred.size)
	{
		narr[i] = g_twenty_to_hundred.arr[i];
		++i;
	}
	narr[i] = str;
	if (g_twenty_to_hundred.size)
		free(g_twenty_to_hundred.arr);
	g_twenty_to_hundred.arr = narr;
	++g_twenty_to_hundred.size;
}

char	*get_twenty_to_hundred(t_size i)
{
	if (i < g_twenty_to_hundred.size)
		return g_twenty_to_hundred.arr[i];
	else
		return NULL;
}

t_bool	is_twenty_to_hundred(char *ptr, t_size *index)
{
	char	a;

	a = '0';
	while (a <= '9')
	{
	}
}
