#include "include/check_dic.h"
void	translate(int tmp, t_size pow);
int	main(int argc, char **argv)
{
	argc = argc - 1;
	int a = atoi(argv[1]);
	t_size b  = atoi(argv[2]);
	printf("%d %d\n", a, b);
    translate(a, b);
	/*if (argc == 2)
	{
		if (check_dic("numbers.dict") != 0)
		{
			
		}
	}
	if (argc == 3)
	{
		if (check_dic(argv[1]) != 0)
		{
			
		}
	}*/
	write(1, "Dict Error\n", 11);
	return (0);
}
