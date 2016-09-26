#include <string.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n);

// char	*ft_strcpy(char *dest, char *src)
// {
// 	int	i;

// 	i = 0;
// 	while (src[i])
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }



void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	
	ptr = (unsigned char *) b;
	while (len > 0)
	{
		*ptr = c;
		ptr++;
		len--;
	}
	return (b);
}

// int main ()
// {
// 	char s[20];
// 	size_t n;

// 	strcpy(s, "0123456789");
// 	n = 5;
// 	printf("VOID PTR->%s\n", s);
// 	printf("       N->%lu\n", n);
// 	bzero(s, n);
// 	printf("    s[0]->%c\n", s[0]);
// 	printf("    s[1]->%c\n", s[1]);
// 	printf("    s[2]->%c\n", s[2]);
// 	printf("    s[3]->%c\n", s[3]);
// 	printf("    s[4]->%c\n", s[4]);
// 	printf("    s[5]->%c\n", s[5]);
// 	printf("    s[6]->%c\n", s[6]);
// 	printf("    s[7]->%c\n", s[7]);
// 	printf("    s[8]->%c\n", s[8]);
// 	printf("    s[9]->%c\n", s[9]);

// 	return (0);
// }

typedef	struct 	s_test_cases
{
	char		*mem;
	int			test_num;
}				t_test_case;

t_test_case cases[] = {
	{"boombambang", 9},
	{"", 3},
	{"\0\0", 2}
};

int main()
{
	char	buf[100];
	char	stdbuf[100];
	int		i;

	memset(buf, 'X', 100);
	memset(stdbuf, 'X', 100);
	i = 0;
	while (i < (int)(sizeof(cases) / sizeof(t_test_case)))
	{
		ft_bzero(buf, cases[i].test_num);
		bzero(stdbuf, cases[i].test_num);
		if (memcmp(buf, stdbuf, 100))
			printf("FAIL: %d, 1\n", i);
		printf("You: %s, Lib: %s,\n", buf, stdbuf);
		i++;
	}
	i = 0;
	while (i < (int)(sizeof(cases) / sizeof(t_test_case)))
	{
		strcpy(buf, cases[i].mem);
		strcpy(stdbuf, cases[i].mem);
		ft_bzero(buf, cases[i].test_num);
		bzero(stdbuf, cases[i].test_num);
		if (memcmp(buf, stdbuf, 100))
			printf("FAIL: %d, 1\n", i);
		printf("You: %s, Lib: %s,\n", buf, stdbuf);
		i++;
	}
	printf("\n\nFINAL: You: %s, Lib: %s,\n", buf, stdbuf);
	return (0);
}
