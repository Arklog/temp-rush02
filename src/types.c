/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:46:03 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 17:50:15 by pducloux         ###   ########.fr       */
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
	s_array_secure_free(*arr);
	arr->arr = narr;
	arr->size++;
}

void	s_array_secure_free(struct s_array arr)
{
	t_size	i;

	i = 0;
	while (i < arr.size)
		free(arr.arr[i]);
	if (arr.arr)
		free(arr.arr);
}
