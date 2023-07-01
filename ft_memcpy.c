/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun42 <hcoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:58:36 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/06/24 21:59:47 by hcoskun42        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict d, const void *restrict s, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*src;

	dst = d;
	src = s;
	if (!dst && !src)
		return (dst);
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
