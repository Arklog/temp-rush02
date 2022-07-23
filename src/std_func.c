/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:50:33 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/23 20:12:13 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "std_func.h"

t_size	ft_strlen(char *str)
{
	t_size	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, t_size n)
{
	t_size i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n -1)
		++i;
	return (s1[i] - s2[i]);
}
