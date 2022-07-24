/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:45:06 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 22:45:07 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/check_dic.h"
void	translate(int tmp, t_size pow);
int	main(int argc, char **argv)
{
	struct s_arrint *i;
	t_size	len;

	if (argc < 2)
	{
		return (1);
	}
	else if (argc == 2)
	{
		if (!check_dic("numbers.dict.txt"))
			ft_putstr("Dict error\n");
	}
	else if (argc == 3)
	{
		if (!check_dic(argv[2]))
			ft_putstr("Dict error\n");
	}
	len = 0;
	i = put_in_tab(argv[1]);
	while (len < i->size)
	{
		translate(i->arr[len], len);
		++len;
	}
	return (0);
}
