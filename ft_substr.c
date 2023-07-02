/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun42 <hcoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:53:38 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/06/24 21:54:14 by hcoskun42        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int min(int a, int b)
{
	if (a > b)
		return b;
	return a;
}

char	*ft_substr(char const *str, unsigned int start, size_t max_len)
{
	char	*res;
	size_t	i;

	if (start >= (unsigned int) ft_strlen(str))
	{
		res = malloc(sizeof(char) * 1);
		res[0] = 0;
		return res;
	}
	res = malloc(sizeof(char) * (min(ft_strlen(str + start), max_len) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (str[i + start] && i < max_len)
	{
		res[i] = str[i + start];
		i++;
	}
	res[i] = 0;
	return (res);
}
