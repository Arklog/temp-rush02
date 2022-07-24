#include "include/check_dic.h"

int	check_line(char *line)
{
	int	i;

	i = 0;
	while (line[i] && line[i] >= '0' && line[i] <= '9')
		i++;
	while (line[i] && line[i] != ':')
	{
		if (line[i] != ' ')
			return (0);
		i++;
	}
	i++;
	while (line[i] && line[i] == ' ')
		i++;
	while (line[i])
	{
		if (line[i] < 32 || line[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

int	read_line(int f, char *line)
{
	char	c;
	int	n;
	int	i;
	
	i = 0;
	n = read(f, &c, 1);
	while (c != '\n' && n > 0)
	{
		line[i] = c;
		printf("ligne[%d] : %c\nc: %c\n", i, line[i], c);
		i++;
		n = read(f, &c, 1);
	}
	line[i] = '\0';
	if (!check_line(line))
		return (0);
	return (1);
}

int	check_dic(char *fname)
{
	int	f;
	int	n;
	char	line[1024];
	char	c;

	f = open(fname, O_RDONLY);
	if (f < 0)
		return (0);
	n = read(f, &c, 1);
	while (n > 0)
	{
		if (read_line(f, line))
			add_line(line);
		else
			return (0);
		n = read(f, &c, 1);
	}
	return (1);
}
