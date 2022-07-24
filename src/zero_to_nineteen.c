/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_to_nineteen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:04:42 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 14:13:45 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static struct s_array	g_zero_to_nineteen = {.arr = NULL, .size = 0};

void	add_zero_to_nineteen(char *ptr)
{
	s_array_add(&g_zero_to_nineteen, ptr);
}

char	*get_zero_to_nineteen(t_size index)
{
	return g_zero_to_nineteen->arr[index];
}

t_bool	is_zero_to_nineteen(char *src)
{
	char	tmp[3];

	if (ft_strlen(src) > 2)
		if (src[2] != ' ')
			return (FALSE);
	ft_memset(ptr, 0, 3);
	ft_memcpy(ptr, src, 2);
	if (ft_atoi(tmp) > 0 && ft_atoi(tmp) < 20)
		return (TRUE);
}
