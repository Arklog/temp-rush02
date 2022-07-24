/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pow_1000.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:14:41 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 22:09:22 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/pow_1000.h"

static struct s_array	g_pow_1000 = {.arr = NULL, .size = 0};

void	add_pow_1000(char *str)
{
	s_array_add(&g_pow_1000, str);
}

char	*get_pow_1000(t_size pow)
{
	if (pow >= g_pow_1000.size)
		return (NULL);
	else
		return (g_pow_1000.arr[pow]);
}

t_bool	is_pow_1000(char *ptr)
{
	t_size	i;
	t_size	pow;

	i = 0;
	pow = 0;
	if (ft_strlen(ptr) < 4)
		return (FALSE);
	while (ptr[i] && (ptr[0] == '1' || ptr[i] == '0'))
	{
		if (ptr[i++] == '0')
			++pow;
	}
	if (pow % 3 == 0)
		return (TRUE);
	return (FALSE);
}

void	free_pow_1000()
{
	s_array_secure_free(g_pow_1000, 1);
}
