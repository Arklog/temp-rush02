#include "include/dic_parser.h"
#include <unistd.h>

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
	int		esp;

	br = 0;
	while (is_digit(*line))
		++line;
	while (*line == ' ' || (*line == ':' && !br))
		if (*(line++) == ':')
			br = !br;
	ptr = NULL;
	esp = 0;
	while (*line != '\0')
	{
		if (*line > 32 && *line < 127)
		{
			ft_append(&ptr, *line);
			esp = 0;
		}
		if (*line == ' ' && esp == 0)
		{
			ft_append(&ptr, *line);
			esp = 1;
		}
		line++;
	}
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
	free(line);
	free(tmp.number);
}

void	putstr(char *str)
{
	int	i;
	static int space = 0;

	if (space)
		write(1, " ", 1);
	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	space = 1;
}

void	translate(int tmp, t_size pow)
{
	if (tmp == 100)
		putstr(get_twenty_to_hundred(100 / 10 - 2));
	else if (tmp / 100 > 0)
	{
		putstr(get_zero_to_nineteen(tmp / 100));
		putstr(get_twenty_to_hundred(100 / 10 - 2));
	}
	if (tmp % 100 >= 20)
	{
		putstr(get_twenty_to_hundred((tmp % 100) / 10 - 2));
		putstr(get_zero_to_nineteen((tmp % 10)));
	}
	else if (tmp % 100 < 20)
		putstr(get_zero_to_nineteen(tmp % 100));
	if (get_pow_1000(pow))
		putstr(get_pow_1000(pow));
}
