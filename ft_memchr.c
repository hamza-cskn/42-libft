/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun42 <hcoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:34:22 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/06/24 20:35:06 by hcoskun42        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memory, int c, size_t n)
{
	const unsigned char	*mem;
	size_t				i;

	mem = memory;
	i = 0;
	while (mem[i] && i < n)
	{
		if (mem[i] == c)
			return ((void *) memory + i);
		i++;
	}
	if (c)
		return (NULL);
	return ((void *) memory + i);
}
