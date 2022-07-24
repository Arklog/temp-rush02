/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dic_parser.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:53:06 by pducloux          #+#    #+#             */
/*   Updated: 2022/07/24 14:26:11 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIC_PARSER_H
# define DIC_PARSER_H
# include "include/types.h"
# include "include/std_func.h"
# include "include/zero_to_nineteen.h"
# include "include/twenty_to_hundred.h"
# include "include/pow_1000.h"

/**
 * Extract the number from a dic's line
 *
 * @param line The line
 *
 * @return Return the number or NULL if not found
 */
char	*extract_number(char *line);

/**
 * Extract the word from a dic's line
 *
 * @param line The line
 *
 * @return Return the word or NULL if not found
 */
char	*extract_word(char *line);

/**
 * Add a line to the list of lines
 *
 * @param line The line to add
 */
void	add_line(char *line);

#endif
