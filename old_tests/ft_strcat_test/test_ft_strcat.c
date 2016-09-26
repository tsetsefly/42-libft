#include <unistd.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

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
	char src[] = "hijklmnop";
	char *result;

	ft_putstr("   strcat: ");
	result = strcat(dest, src);
	ft_putstr(result);
	ft_putchar('\n');
	ft_putstr("ft_strcat: ");
	result = ft_strcat(dest2, src);
	ft_putstr(result);
	ft_putchar('\n');
	return (0);
}