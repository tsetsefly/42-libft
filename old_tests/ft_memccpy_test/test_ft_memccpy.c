#include <string.h>
#include <stdio.h>

void		*ft_memccpy(void *dst, const void *src, int c, size_t n);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main ()
{
	char dst[20];
	char src[5];
	int c;
	size_t n;

	strcpy(dst, "0123456789\0xxxxxxxxx");
	strcpy(src, "abcd");
	c = 'c';
	n = 4;
	printf("       DST->%s\n", dst);
	printf("       SRC->%s\n", src);
	printf("      CHAR->%c\n", c);
	printf("         N->%lu\n", n);
	printf("   memccpy->%s\n", memccpy(dst, src, c, n));
	printf("lib_DST(2)->%s\n", dst);
	strcpy(dst, "0123456789\0xxxxxxxxx");
	printf("ft_memccpy->%s\n", ft_memccpy(dst, src, c, n));
	printf(" ft_DST(2)->%s\n", dst);

	return (0);
}
