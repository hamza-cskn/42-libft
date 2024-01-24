/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:40:48 by hcoskun42         #+#    #+#             */
/*   Updated: 2024/01/24 09:17:11 by hcoskun42        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//tocheck
char	*ft_strdup(const char *str)
{
	char	*res;
	size_t	size;

	size = ft_strlen(str) + 1;
	res = ALLOCATE_MEMORY(sizeof(char) * size);
	if (!res)
		return (NULL);
	ft_strlcpy(res, str, size);
	return (res);
}
