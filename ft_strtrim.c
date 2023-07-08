/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:51:17 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/08 23:46:02 by hcoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contains(char const *set, char const c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static int	find_start(char const *str, char const *set)
{
	int	i;

	i = 0;
	while (str[i] && contains(set, str[i]))
		i++;
	return (i);
}

static int	find_end(char const *str, char const *set, int len)
{
	int	i;

	i = (int) len - 1;
	while (i > 0 && contains(set, str[i]))
		i--;
	return (i);
}

char	*ft_strtrim(char const *str, char const *set)
{
	char	*result;
	int		start;
	int		end;
	int		i;

	if (!str)
		return (NULL);
	start = find_start(str, set);
	end = find_end(str, set, ft_strlen(str));
	if (end < start || (!*str && !*set))
		return (ft_strdup(""));
	result = malloc(sizeof(char) * (end - start + 2));
	if (!result)
		return (NULL);
	i = 0;
	while (i <= end - start)
	{
		result[i] = str[i + start];
		i++;
	}
	result[i] = 0;
	return (result);
}
