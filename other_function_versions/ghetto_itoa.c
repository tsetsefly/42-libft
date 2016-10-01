/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 12:51:58 by dtse              #+#    #+#             */
/*   Updated: 2016/09/27 12:52:18 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

// # include <string.h>
// # include <stdlib.h>
// # include <unistd.h>

// void				*ft_memset(void *b, int c, size_t len)
// {
// 	unsigned char	*ptr;

// 	ptr = (unsigned char *)b;
// 	while (len > 0)
// 	{
// 		*ptr = c;
// 		ptr++;
// 		len--;
// 	}
// 	return (b);
// }

// void	ft_bzero(void *s, size_t n)
// {
// 	ft_memset(s, '\0', n);
// }

// size_t		ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// char		*ft_strnew(size_t size)
// {
// 	char	*str;

// 	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
// 		return (NULL);
// 	ft_bzero(str, size + 1);
// 	return (str);
// }

char		*ft_strrev(char *str)
{
	int		i;
	int		j;
	int		len;
	char	*tmpstr;
	char	tmpchar1;

	tmpstr = str;
	i = ft_strlen(str) - 1;
	len = (i / 2) + 1;
	j = 0;
	while (len)
	{
		tmpchar1 = str[i];
		str[i] = str[j];
		str[j] = tmpchar1;
		i--;
		j++;
		len--;
	}
	str = tmpstr;
	return (str);
}

int			num_digits(long n)
{
	int		digits;

	digits = 0;
	while (n)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

void		is_negzero(long *num, int *neg)
{
	if (*num < 0)
	{
		*neg = 1;
		*num *= -1;
	}
	if (*num == 0)
		*neg = 1;
}

char		*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	int		neg;
	int		remainder;
	long	num;

	neg = 0;
	i = 0;
	num = n;
	is_negzero(&num, &neg);
	if (!(str = ft_strnew(num_digits(num) + neg)))
		return (NULL);
	while (num)
	{
		remainder = num % 10;
		str[i++] = remainder + '0';
		num /= 10;
	}
	if (neg && n != 0)
		str[i] = '-';
	if (n == 0)
		str[0] = '0';
	return (ft_strrev(str));

	// char	*str;
	// size_t	i;
	// int		neg;
	// int		remainder;
	// long	num;

	// neg = 1;
	// i = 0;
	// num = n;
	// if (num == 0)
	// {
	// 	str = ft_strnew(1);
	// 	str[0] = '0';
	// 	str[1] = '\0';
	// 	return (str);
	// }
	// if (num < 0)
	// {
	// 	neg *= -1;
	// 	num *= -1;
	// 	str = ft_strnew(num_digits(num) + 1);
	// }
	// else
	// 	str = ft_strnew(num_digits(num));
	// if (!str)
	// 	return (NULL);
	// while (num)
	// {
	// 	remainder = num % 10;
	// 	str[i++] = remainder + '0';
	// 	num /= 10;
	// }
	// if (neg == -1)
	// 	str[i] = '-';
	// return (ft_strrev(str));
}

// int main ()
// {
// 	int num;
// 	char *str_num;

// 	num = -2147483648;
// 	// num = 0;
// 	str_num = ft_itoa(num);
// 	printf("%s\n", str_num);
// 	return (0);
// }