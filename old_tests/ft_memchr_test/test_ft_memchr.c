#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n);

int main ()
{
	char s[20];
	int c;
	size_t n;

	strcpy(s, "0123456789\0xxxxxxxxx");
	c = '5';
	n = 4;
	printf("         S->%s\n", s);
	printf("      CHAR->%c\n", c);
	printf("         N->%lu\n", n);
	printf("   memchr->%s\n", memchr(s, c, n));
	printf("lib_S(2)->%s\n", s);
	strcpy(s, "0123456789\0xxxxxxxxx");
	printf("ft_memchr->%s\n", ft_memchr(s, c, n));
	printf(" ft_S(2)->%s\n", s);

	return (0);
}