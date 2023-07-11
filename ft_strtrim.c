/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:51:17 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/10 16:14:17 by hcoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	contains(char const *set, char const c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

int	find_start(char const *str, char const *set)
{
	int	i;

	i = 0;
	while (str[i] && contains(set, str[i]))
		i++;
	return (i);
}

int	find_end(char const *str, char const *set, int len)
{
	int	i;

	i = (int) len - 1;
	while (i > 0 && contains(set, str[i]))
		i--;
	return (i);
}

char	*ft_strtrim(char const *str, char const *set)
{
	int		start;
	int		end;

	if (!str)
		return (NULL);
	start = find_start(str, set);
	end = find_end(str, set, ft_strlen(str));
	if (end < start || (!*str && !*set))
		return (ft_strdup(""));
	return (ft_substr(str, start, end - start + 1));
}
