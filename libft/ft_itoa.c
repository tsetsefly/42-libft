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
	while (len--)
	{
		tmpchar1 = str[i];
		str[i] = str[j];
		str[j] = tmpchar1;
		i--;
		j++;
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
	long	num;

	neg = 0;
	i = 0;
	num = n;
	is_negzero(&num, &neg);
	if (!(str = ft_strnew(num_digits(num) + neg)))
		return (NULL);
	while (num)
	{
		str[i++] = num % 10 + '0';
		num /= 10;
	}
	if (neg && n != 0)
		str[i] = '-';
	if (n == 0)
		str[0] = '0';
	return (ft_strrev(str));
}
