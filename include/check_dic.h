/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dic.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 00:07:22 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 22:38:35 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_DIC_H
# define CHECK_DIC_H
# include <stdio.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <unistd.h>
# include "include/dic_parser.h"

/**
 * Read a line from a given file and store it to the given buffer
 *
 * @param f Fileno
 * @param line The buffer
 *
 * @return 1 if read successful, 0 else
 */
int	read_line(int f, char **line);

/**
 * Check if a line from the dic is valid
 *
 * @param line the line 
 *
 * @return 1 if line is valid, 0 else
 */
int	check_line(char *line);

/**
 * Iterate over the given dictionnary and parse it
 *
 * @param fname the filename
 *
 * @return 1 on successful parsing, 0 else
 */
int	check_dic(char *fname);

struct s_array	*put_in_tab(char *line);

#endif
