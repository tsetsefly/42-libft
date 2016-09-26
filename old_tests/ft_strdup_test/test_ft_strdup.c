#include <unistd.h>
#include <string.h>
#include <malloc/malloc.h>

char	*ft_strdup(char *str);

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

size_t		ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main ()
{
	char str1[] = "w00t";
	char *str2;
	char *str3;
	int size2;
	int size3;

	str2 = ft_strdup(str1);
	str3 = strdup(str1);
	size2 = malloc_size(str2);
	size3 = malloc_size(str3);
	
	ft_putstr("ft_strdup: ");
	ft_putstr(ft_strdup(str2));
	ft_putchar('\n');
	ft_putstr("  ft_size: ");
	ft_putnbr(size2);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putstr("   strdup: ");
	ft_putstr(ft_strdup(str3));
	ft_putchar('\n');
	ft_putstr("     size: ");
	ft_putnbr(size3);
	ft_putchar('\n');
	return (0);
}
