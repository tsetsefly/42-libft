#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

size_t ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

typedef char* t_testcase[3];

t_testcase g_testcases[] = {
	{"Beginning of string", "Begin", "Beginning of string"},
	{"End of string\0a", "ing\0b", "ing"},
	{"Matches twice twice", "twice", "twice twice"},
	{"Empty search", "", "Empty search"},
	{"Not found", "pineapple", 0},
	{"worl hahahahoha", "haho", "hahoha"},
};

int		main(void)
{
	int		i;
	char	*result;
	char	*stdlib;

	i = 0;
	while (i < (int)(sizeof(g_testcases) / sizeof(t_testcase)))
	{
		result = ft_strstr(g_testcases[i][0], g_testcases[i][1]);
		stdlib = strstr(g_testcases[i][0], g_testcases[i][1]);
		printf("strstr('%s', '%s')\n", g_testcases[i][0],
				g_testcases[i][1]);
		printf("Lib: %s\nYou: %s\n", stdlib, result);
		if (stdlib && result)
		{
			if (strcmp(stdlib, result))
				printf("FAIL\n");
		}
		else if ((!!stdlib) ^ (!!result))
			printf("FAIL\n");
		i++;
	}
}