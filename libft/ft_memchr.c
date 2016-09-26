/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 21:44:12 by dtse              #+#    #+#             */
/*   Updated: 2016/09/23 21:44:13 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*s_tmp;

	s_tmp = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (*s_tmp == c)
			return ((void *)s_tmp);
		s_tmp++;
		i++;
	}
	return (0);
}
