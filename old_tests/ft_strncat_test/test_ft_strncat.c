#include <unistd.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, int nb);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
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

size_t ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int main ()
{
	char dest[] = "abc\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"; // need enough memory in destination... only way is to null terminate earlier and add in excess memory
	char dest2[] = "abc\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char src[] = "-defghijklmnop";
	char *result;
	size_t size = 1; // testing -1, 0, 1+

	ft_putstr("   strncat: ");
	result = strncat(dest, src, size);
	ft_putstr(result);
	ft_putchar('\n');
	ft_putstr("ft_strncat: ");
	result = ft_strncat(dest2, src, size);
	ft_putstr(result);
	ft_putchar('\n');
	return (0);
}