/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 22:10:03 by dtse              #+#    #+#             */
/*   Updated: 2016/09/23 22:10:04 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char *s1_tmp;
	const unsigned char *s2_tmp;

	s1_tmp = s1;
	s2_tmp = s2;
	i = 0;
	while (i < n && (*s1_tmp++ == *s2_tmp++))
	{
		i++;
	}
	return (*(--s1_tmp) - *(--s2_tmp));
}
