/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun42 <hcoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:51:17 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/06/24 21:53:26 by hcoskun42        ###   ########.tr       */
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
	int		len;
	int		i;

	len = (int) ft_strlen(str);
	start = (int) find_start(str, set);
	end = (int) find_end(str, set, len);
	if (end < start)
	{
		result = malloc(sizeof(char) * 1);
		result[0] = 0;
		return (result);
	}
	result = malloc(sizeof(char) * (end - start + 2));
	if (!result)
		return (NULL);
	i = -1;
	while (++i <= end - start)
	{
		result[i] = str[i + start];
	}
	result[i] = 0;
	return (result);
}
