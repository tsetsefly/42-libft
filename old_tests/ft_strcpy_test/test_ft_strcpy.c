#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

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
	char str[] = "wahoo!!!";
	char str2[] = "WAHOO!!!";
	char str3[] = "wahoo!!!";
	char str4[] = "WAHOO!!!";

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

	ft_strcpy(str, str2);
	strcpy(str3, str4);

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
