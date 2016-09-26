#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c);

int main ()
{
	char *str;
	int c;

	str = "the quick brown fox jumps over the lazy dog";
	c = 116; // t
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strchr(str, c));
	printf("ft_strchr->%s\n", ft_strchr(str, c));
	printf("\n");

	str = "the quick brown fox jumps over the lazy dog";
	c = 103; // g
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strchr(str, c));
	printf("ft_strchr->%s\n", ft_strchr(str, c));
	printf("\n");

	str = "the quick brown fox jumps over the lazy dog";
	c = 100; // d
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strchr(str, c));
	printf("ft_strchr->%s\n", ft_strchr(str, c));
	printf("\n");

	str = "the quick brown fox jumps over the lazy dog";
	c = 63; // ?
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strchr(str, c));
	printf("ft_strchr->%s\n", ft_strchr(str, c));
	printf("\n");

	str = "the quick brown fox jumps over the lazy dog";
	c = 9; // \t
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strchr(str, c));
	printf("ft_strchr->%s\n", ft_strchr(str, c));
	printf("\n");

	str = "the quick brown fox	jumps over the lazy dog";
	c = 9; // \t
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strchr(str, c));
	printf("ft_strchr->%s\n", ft_strchr(str, c));
	printf("\n");

	str = "the quick brown fox jumps over the lazy dog";
	c = 159; // Ÿ
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strchr(str, c));
	printf("ft_strchr->%s\n", ft_strchr(str, c));
	printf("\n");

	str = "the quick brown fox jumps over the lazy dog";
	c = 0; // NUL
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strchr(str, c));
	printf("ft_strchr->%s\n", ft_strchr(str, c));
	printf("\n");

	str = "the quick brown fox jumps over the lazy dog";
	c = 127; // <delete>
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strchr(str, c));
	printf("ft_strchr->%s\n", ft_strchr(str, c));
	printf("\n");

	return (0);
}