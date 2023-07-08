/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:34:22 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/08 21:27:52 by hcoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memory, int c, size_t size)
{
	const unsigned char	*mem;
	size_t				i;

	mem = memory;
	i = 0;
	while (i < size)
	{
		if (mem[i] == (unsigned char) c)
			return ((void *)memory + i);
		i++;
	}
	return (NULL);
}
