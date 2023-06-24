/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun42 <hcoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:37:39 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/06/24 21:57:46 by hcoskun42        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memory, int c, size_t len)
{
	size_t	i;
	char	*mem;

	mem = memory;
	i = 0;
	while (i < len)
	{
		mem[i] = (char) c;
		i++;
	}
	return ((void *) mem);
}
