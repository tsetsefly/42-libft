/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 20:20:15 by dtse              #+#    #+#             */
/*   Updated: 2016/09/22 20:20:16 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *str);

char		*ft_strrchr(const char *s, int c)
{
	int		i;

	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char*)&s[i]);
		i--;
	}
	return (0);
}