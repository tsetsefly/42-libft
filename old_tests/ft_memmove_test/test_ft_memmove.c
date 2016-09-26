#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len);

int main ()
{
	char dst[20];
	char src[8];
	size_t n;

	strcpy(dst, "0123456789\0xxxxxxxxx");
	strcpy(src, "abcdefg");
	n = 0;
	printf("       DST->%s\n", dst);
	printf("       SRC->%s\n", src);
	printf("         N->%lu\n", n);
	printf("   memmove->%s\n", memmove(dst, src, n));
	printf("lib_DST(2)->%s\n", dst);
	strcpy(dst, "0123456789\0xxxxxxxxx");
	printf("ft_memmove->%s\n", ft_memmove(dst, src, n));
	printf(" ft_DST(2)->%s\n", dst);

	return (0);
}