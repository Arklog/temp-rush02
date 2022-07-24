/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:46:03 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 22:22:09 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/types.h"
#include "include/memfunc.h"

void	s_array_add(struct s_array *arr, char *str)
{
	char	**narr;

	narr = malloc(sizeof(char *) * (arr->size + 1));
	if (!narr)
		return ;
	ft_memcpy(narr, arr->arr, arr->size * sizeof(char *));
	narr[arr->size] = str;
	s_array_secure_free(*arr, 0);
	arr->arr = narr;
	arr->size++;
}

void	s_array_secure_free(struct s_array arr, t_bool all)
{
	t_size	i;

	i = 0;
	if (!arr.arr)
		return ;
	while (i < arr.size && all)
			free(arr.arr[i++]);
	if (arr.arr)
		free(arr.arr);
}
