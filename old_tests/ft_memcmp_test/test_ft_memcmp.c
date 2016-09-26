#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main ()
{
	char s1[20];
	char s2[20];
	size_t n;

	strcpy(s1, "0129456789\0xxxxxxxxx");
	strcpy(s2, "0123456789\0xxxxxxxxx");
	n = 5;

	printf("       s1->%s\n", s1);
	printf("       s2->%s\n", s2);
	printf("        N->%lu\n", n);
	printf("   memcmp=>%d\n", memcmp(s1, s2, n));
	strcpy(s1, "0129456789\0xxxxxxxxx");
	strcpy(s2, "0123456789\0xxxxxxxxx");
	printf("    ft_s1->%s\n", s1);
	printf("    ft_s2->%s\n", s2);
	printf("     ft_N->%lu\n", n);
	printf("ft_memcmp=>%d\n", ft_memcmp(s1, s2, n));

	return (0);
}