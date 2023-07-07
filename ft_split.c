/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:38:47 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/04 15:27:47 by hcoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_length(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	count_words(char const *str, char c)
{
	int	i; 
	int	count;

	count = 0;
	while (*str)
	{
		i = 0;
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
		str += i;
	}
	return (count);
}

char	**ft_split(char const *str, char c)
{
	char	**result;
	int		len;
	int		word_amount;
	int		word_index;
	int		i;

	word_index = 0;
	word_amount = count_words(str, c);
	result = (char **) malloc(sizeof(char *) * (word_amount + 1));
	if (!result)
		return (NULL);
	while (*str)
	{
		i = 0;
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			len = word_length(str + i, c);
			result[word_index] = malloc((len + 1) * sizeof(char));
			ft_strlcpy(result[word_index++], str + i, len + 1);
			i += len;
		}
		str += i;
	}
	result[word_index] = NULL;
	return (result);
}
