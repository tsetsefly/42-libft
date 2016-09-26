#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

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
		num *= -1;
		ft_putchar('-');
	}
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}

int main ()
{
	unsigned int size;
	char str[] = "1234567";
	char str2[] = "abcdefgh";
	char str3[] = "1234567";
	char str4[] = "abcdefgh";

	size = 3;

	ft_putstr(" str = ");
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr("str2 = ");
	ft_putstr(str2);
	ft_putchar('\n');
	ft_putstr("str3 = ");
	ft_putstr(str3);
	ft_putchar('\n');
	ft_putstr("str4 = ");
	ft_putstr(str4);
	ft_putchar('\n');

	ft_strncpy(str, str2, size);
	strncpy(str3, str4, size);

	ft_putchar('\n');
	ft_putstr(" str = ");
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr("str2 = ");
	ft_putstr(str2);
	ft_putchar('\n');
	ft_putstr("str3 = ");
	ft_putstr(str3);
	ft_putchar('\n');
	ft_putstr("str4 = ");
	ft_putstr(str4);
	ft_putchar('\n');
	return (0);
}
