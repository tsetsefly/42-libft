#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c);

int		main(void)
{
	int		i;
	int		fail_counter;

	i = 0;
	fail_counter = 0;
	while (i < 255)
	{
		if (ft_tolower(i) != tolower(i))
		{
			fail_counter++;
			printf("(%d)", fail_counter);
			printf("FAIL: ft_tolower->%c, ", ft_tolower(i));
			printf("tolower->%c\n", tolower(i));
		}
		i++;	
	}
	if (fail_counter == 0)
		printf("PASS: all 255 characters print the same!");
	return (0);
}
