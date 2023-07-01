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

// i hate you norminette
void	copy(int start, int end, char *dst, const char *src)
{
	int	i;
	int	incr;

	if (start == -1)
		incr = 1;
	else
		incr = -1;
	i = start;
	while (i != end)
	{
		dst[i] = src[i];
		i += incr;
	}
}

void	directional_cpy(int forward, int len, char *dst, const char *src)
{
	if (forward)
		copy(len, -1, dst, src);
	else
		copy(-1, len + 1, dst, src);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	if (!dst && !src)
		return ((void *) dst);
	dest = dst;
	source = src;
	directional_cpy(dest > source, (int) len - 1, dest, source);
	return (dst);
}
