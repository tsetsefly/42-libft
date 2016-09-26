#include <unistd.h>
#include <string.h>

size_t		ft_strlen(char *str);

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
	ft_putstr("ft_strlen: ");
	ft_putnbr(ft_strlen("asdfghjkl;    67890"));
	ft_putchar('\n');
	ft_putstr("   strlen: ");
	ft_putnbr(strlen("asdfghjkl;    67890"));
	ft_putchar('\n');
	return (0);
}
