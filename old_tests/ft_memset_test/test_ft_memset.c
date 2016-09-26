#include <string.h>
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len);

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
	char b[20];
	int c;
	size_t len;

	strcpy(b, "0123456789");
	c = 64;
	len = 5;

	printf(" VOID PTR->%s\n", b);
	printf("     CHAR->%c\n", c);
	printf("   memset->%s\n", memset(b, c, len));
	printf("ft_memset->%s\n", ft_memset(b, c, len));

	return (0);
}
