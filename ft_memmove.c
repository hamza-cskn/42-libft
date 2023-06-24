/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun42 <hcoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:36:26 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/06/24 20:37:23 by hcoskun42        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	dest = dst;
	source = src;
	if (!dest && !source)
		return ((void *) dest);
	while (len > 0)
	{
		dest[len] = source[len];
		len--;
	}
	return (dst);
}
//tocheck
