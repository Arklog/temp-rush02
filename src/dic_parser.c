#include "include/dic_parser.h"

char	*extract_number(char *line)
{
	t_size	i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (is_digit(line[i]))
		ft_append(&ptr, line[i++]);
	return ptr;
}

char	*extract_word(char *line)
{
	t_bool	br;
	char	*ptr;

	br = 0;
	while (is_digit(*line))
		++line;
	while (*line == ' ' || (*line == ':' && !br))
		if (*line == ':')
			br = !br;
	while (*line != '\n')
		ft_append(&ptr, *(line++));
	return ptr;
}
