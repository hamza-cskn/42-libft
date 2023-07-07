/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:37:39 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/07/04 16:36:39 by hcoskun          ###   ########.fr       */
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
	return (memory);
}
