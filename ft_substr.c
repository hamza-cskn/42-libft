/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:53:38 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/11 13:03:43 by hcoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

char	*ft_substr(char const *str, unsigned int start, size_t max_len)
{
	size_t	i;
	char	*result;

	i = max_len;
	if (!str)
		return (NULL);
	if (start >= ft_strlen(str) || max_len == 0)
		return (ft_strdup(""));
	if (max_len > ft_strlen(str + start))
		i = ft_strlen(str + start);
	result = (char *) malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, str + start, i + 1);
	return (result);
}
