#include <unistd.h>
#include <string.h>
#include <stdio.h>

char		*ft_strnstr(char *str, char *to_find, size_t len);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_putnbr(int nb)
{
	long num;

	num = nb;
	if (num < 0)
	{
		num *=-1;
		ft_putchar('-');
	}
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}

size_t ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main ()
{
	char *str;
	char *to_find;
	size_t len;

	len = 11;
	str = "    the quick brown fox jumps over the lazy dog... ";
	to_find = "qui";
	printf("   strnstr = %s\n", strnstr(str, to_find, len));
	printf("ft_strnstr = %s\n", ft_strnstr(str, to_find, len));
	// ft_putstr("   strnstr = ");
	// ft_putstr(strnstr(str, to_find, len));
	// ft_putchar('\n');
	// ft_putstr("ft_strnstr = ");
	// ft_putstr(ft_strnstr(str, to_find, len));
	// ft_putchar('\n');
	return (0);	
}