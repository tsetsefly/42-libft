#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c);

int		main(void)
{
	int		i;
	int		your_count;
	int		lib_count;

	i = 0;
	your_count = 0;
	lib_count = 0;
	while (i < 255)
	{
		if (ft_isalnum(i))
			your_count++;
		if (isalnum(i))
		lib_count++;
		i++;
	}
	if (your_count == lib_count)
		printf("PASS: your_count = %d, lib_count = %d\n", your_count, lib_count);
	else
		printf("FAIL: your_count = %d, lib_count = %d\n", your_count, lib_count);
	return (0);
}
