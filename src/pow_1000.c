/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pow_1000.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:14:41 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/23 18:36:36 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pow_1000.h"

static s_array	g_pow_1000 = {.arr = NULL, .size = 0};

void	add_pow_1000(char *str)
{
	char	**narr;
	t_size	i;

	narr = malloc(sizeof(char *) * (pow_1000.size + 1));
	if (!narr)
		return ;
	i = 0;
	while (i < g_pow_1000.size)
	{
		narr[i] = g_pow_1000.arr[i];
		++i;
	}
	narr[i] = str;
	if (pow_1000.size)
		free(pow_1000.arr);
	pow_1000.arr = narr;
	++pow_1000.size;
}

char	*get_pow_1000(t_size pow)
{
	if (pow > g_pow_1000.size)
		return (NULL);
	else
		return (g_pow_1000.arr[pow - 1]);
}

t_bool	is_pow_1000(char *ptr, t_size *ptr)
{
	t_size	i;
	t_size	pow;

	i = 0;
	while (ptr[i] && (ptr[0] == '1' || ptr[i] == 0))
	{
		if (ptr[i++] == '0')
			++pow;
	}
	if (pow % 3 == 0)
	{
		if (ptr)
			*ptr = pow / 3;
		return (1);
	}
}
