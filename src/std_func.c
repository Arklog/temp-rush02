/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:50:33 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 20:05:14 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/std_func.h"

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

t_bool	is_digit(char a)
{
	return (a >= '0' && a <= '9');
}

t_bool	is_printable(char a)
{
	return (a >= 32 && a <= 126);
}

void	ft_append(char **ptr, char a)
{
	char	*nptr;
	t_size	len;

	len = 2;
	if (*ptr)
	{
		len = ft_strlen(*ptr);
		nptr = malloc(sizeof(char) * (len + 1));
		if (!nptr)
			return ;
		ft_memset(nptr, 0, sizeof(char) * (len + 1));
		ft_memcpy(nptr, *ptr, sizeof(char) * len);
		nptr[len] = a;
	}
	else
	{
		nptr = malloc(sizeof(char) * len);
		if (!nptr)
			return ;
		nptr[0] = a;
		nptr[1] = 0;
	}
	if (*ptr)
		free(*ptr);
	*ptr = nptr;
}
