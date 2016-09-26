#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c);

size_t		ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main ()
{
	char *str;
	int c;

	str = "1the quick brown fox jumps over the lazy dog";
	c = 49; // 1
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strrchr(str, c));
	printf("ft_strchr->%s\n", ft_strrchr(str, c));
	printf("\n");

	str = "the quick brown fox jumps over the lazy dog";
	c = 103; // g
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strrchr(str, c));
	printf("ft_strchr->%s\n", ft_strrchr(str, c));
	printf("\n");

	str = "the quick brown fox jumps over the lazy dog";
	c = 116; // t
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strrchr(str, c));
	printf("ft_strchr->%s\n", ft_strrchr(str, c));
	printf("\n");

	str = "the quick brown fox jumps over the lazy dog";
	c = 100; // d
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strrchr(str, c));
	printf("ft_strchr->%s\n", ft_strrchr(str, c));
	printf("\n");

	str = "the quick brown fox jumps over the lazy dog";
	c = 63; // ?
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strrchr(str, c));
	printf("ft_strchr->%s\n", ft_strrchr(str, c));
	printf("\n");

	str = "the quick brown fox jumps over the lazy dog";
	c = 9; // \t
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strrchr(str, c));
	printf("ft_strchr->%s\n", ft_strrchr(str, c));
	printf("\n");

	str = "the quick brown fox	jumps over the lazy dog";
	c = 9; // \t
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strrchr(str, c));
	printf("ft_strchr->%s\n", ft_strrchr(str, c));
	printf("\n");

	str = "the quick brown fox jumps over the lazy dog";
	c = 159; // Ÿ
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strrchr(str, c));
	printf("ft_strchr->%s\n", ft_strrchr(str, c));
	printf("\n");

	str = "the quick brown fox jumps over the lazy dog";
	c = 0; // NUL
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strrchr(str, c));
	printf("ft_strchr->%s\n", ft_strrchr(str, c));
	printf("\n");

	str = "the quick brown fox jumps over the lazy dog";
	c = 127; // <delete>
	printf("   STRING->\"%s\"\n", str);
	printf("     CHAR->\'%c\'\n", c);
	printf("   strchr->%s\n", strrchr(str, c));
	printf("ft_strchr->%s\n", ft_strrchr(str, c));
	printf("\n");

	return (0);
}