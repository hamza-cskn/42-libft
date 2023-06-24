/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun42 <hcoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:50:27 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/06/24 21:51:04 by hcoskun42        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (str[i])
	{
		if (str[i] == c)
			return ((char *) str + i);
		i--;
	}
	if (c)
		return (NULL);
	return ((char *) str + i);
}
