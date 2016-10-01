/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 16:33:43 by dtse              #+#    #+#             */
/*   Updated: 2016/09/26 16:34:10 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}


int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (!n)
		return (1);
	// while (*s1 && i < n)
	// {
	// 	printf("i = %lu", i);
	// 	printf("*s1: '%c', ", *s1);
	// 	printf("*s2: '%c'\n", *s2);
	// 	if (*s1 != *s2)
	// 		return (0);
	// 	s2++;
	// 	s1++;
	// 	i++;
	// }
	return (ft_strncmp(s1, s2, n) == 0);
}

int main()
{
	printf("ft_strnequ: %d\n", ft_strnequ("", " ", 1));
	return (0);
}