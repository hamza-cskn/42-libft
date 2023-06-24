/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun42 <hcoskun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:46:08 by hcoskun42         #+#    #+#             */
/*   Updated: 2023/06/24 21:48:00 by hcoskun42        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//to check const char *c and char const *c
size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != 0)
	{
		i++;
	}
	return (i * sizeof(char));
}
