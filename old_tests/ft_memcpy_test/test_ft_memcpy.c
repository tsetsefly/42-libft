#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

typedef	struct	s_test_case
{
	int			size;
	char		*str;
}				t_test_case;

t_test_case cases[] = {
	{5, "I am destiny.XXXX"},
	{50, "I am destiny.XXXX"},
	{5, ""},
	{2, "\n."},
	{4, "Net"}
};

// #ifdef MEMCPY_TEST
int		main(void)
{
	char	buf[100];
	char	stdbuf[100];
	char	*result;
	char	*stdret;
	int		i;

	memset(buf, 0, 100);
	memset(stdbuf, 0, 100);
	i = 0;
	while (i < (int)(sizeof(cases) / sizeof(t_test_case)))
	{
		result = (char *)ft_memcpy(buf, cases[i].str, cases[i].size);
		stdret = (char *)memcpy(stdbuf, cases[i].str, cases[i].size);
		if ((result - buf) != (stdret - stdbuf))
			printf("FAIL: %d, 1\n", i);
		if (strcmp(result, stdret))
			printf("FAIL: %d, 2\n", i);
		if (memcmp(buf, stdbuf, 100))
			printf("FAIL: %d, 3\n", i);
		printf("You: %s, Lib: %s,\n", result, stdret);
		i++;
	}
	printf("\n\nFINAL: You: %s, Lib: %s,\n", buf, stdbuf);

	return (0);
}
// #endif

// gcc -DMEMCPY_TEST