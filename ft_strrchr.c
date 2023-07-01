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

char	*ft_strrchr(char *str, int c)
{
	int	i;

	if (!str[0])
		return (NULL);
	i = (int) ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (unsigned  char) c)
			return ((char *) str + i);
		i--;
	}
	if (c)
		return (NULL);
	return ((char *) str + i);
}
