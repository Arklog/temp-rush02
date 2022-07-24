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
		if (*(line++) == ':')
			br = !br;
	while (*line != '\n')
		ft_append(&ptr, *(line++));
	return ptr;
}

void	 add_line(char *line)
{
	struct s_dic_line tmp;

	tmp.number = extract_number(line);
	tmp.word = extract_word(line);
	if (is_zero_to_nineteen(line))
		add_zero_to_nineteen(tmp.word);
	else if (is_twenty_to_hundred(line))
		add_twenty_to_hundred(tmp.word);
	else if (is_pow_1000(line))
		add_pow_1000(tmp.word);
}
