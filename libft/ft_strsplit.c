/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 23:53:19 by dtse              #+#    #+#             */
/*   Updated: 2016/09/26 23:53:41 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		delim_word_count(char *str, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i])
			words++;
		while (str[i] != c && str[i])
			i++;
	}
	return (words);
}

char		*leading_delim(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] == c && str[i])
		str++;
	return (str);
}

char		**create_matrix(char **array, char *str, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (k < delim_word_count(str, c))
	{
		while (str[i] != c && str[i])
		{
			j++;
			i++;
		}
		if (!(array[k] = (char *)malloc(sizeof(char) * (j + 1))))
			return (0);
		j = 0;
		while (str[i] == c && str[i])
			i++;
		k++;
	}
	array[k] = 0;
	return (array);
}

char		**fill_matrix(char **array, char *str, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (k < delim_word_count(str, c))
	{
		while (str[i] != c && str[i])
		{
			array[k][j] = str[i];
			j++;
			i++;
		}
		array[k][j] = '\0';
		j = 0;
		while (str[i] == c && str[i])
			i++;
		k++;
	}
	return (array);
}

char		**ft_strsplit(char const *s, char c)
{
	char	*str;
	char	**array;

	if (!(str = ft_strdup(s)))
		return (0);
	if (!(array = (char **)malloc(sizeof(char *) *
		(delim_word_count(str, c) + 1))))
		return (0);
	str = leading_delim(str, c);
	if (!(array = create_matrix(array, str, c)))
		return (0);
	if (!(array = fill_matrix(array, str, c)))
		return (0);
	return (array);
}
