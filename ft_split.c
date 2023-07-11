/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:38:47 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/11 12:57:42 by hcoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wlen(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	count_words(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

char	**free_all(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	char	**result;
	int		word_index;

	if (!str)
		return (NULL);
	word_index = 0;
	result = (char **) malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!result)
		return (NULL);
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			result[word_index] = ft_substr(str, 0, wlen(str, c));
			if (!result[word_index++])
				return (free_all(result));
			str += wlen(str, c);
		}
	}
	result[word_index] = NULL;
	return (result);
}
